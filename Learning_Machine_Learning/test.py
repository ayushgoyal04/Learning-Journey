import numpy as np
from PIL import Image
from tensorflow.keras.applications import VGG16
from tensorflow.keras.applications.vgg16 import preprocess_input
from sklearn.metrics.pairwise import cosine_similarity

# Function to load and preprocess image from a local file path
def load_image_from_file(file_path, target_size=(224, 224)):
    img = Image.open(file_path)
    img = img.resize(target_size)
    img = np.array(img)

    if img.shape[-1] == 4:  # Handle images with alpha channel
        img = img[..., :3]

    img = np.expand_dims(img, axis=0)  # Add batch dimension
    img = preprocess_input(img)  # Preprocess for the VGG16 model
    return img

# Function to extract features using VGG16
def extract_features(model, img):
    return model.predict(img)

# Function to compute similarity between two images
def calculate_similarity(img_path1, img_path2):
    model = VGG16(weights='imagenet', include_top=False, pooling='avg')  # Use VGG16 without top layers

    # Load and preprocess both images
    img1 = load_image_from_file(img_path1)
    img2 = load_image_from_file(img_path2)

    # Extract features
    features1 = extract_features(model, img1)
    features2 = extract_features(model, img2)

    # Compute cosine similarity
    similarity = cosine_similarity(features1, features2)[0][0]

    # Convert to percentage
    similarity_percentage = similarity * 100

    return similarity_percentage

# Example usage with local file paths
img_path1 = 'images/2.jpeg'  # Change this to your local file path
img_path2 = 'images/3.jpeg'  # Change this to your local file path

similarity_score = calculate_similarity(img_path1, img_path2)
print(f"Similarity: {similarity_score:.2f}%")
