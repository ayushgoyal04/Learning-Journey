# image_similarity.py

import numpy as np
import cv2
from tensorflow.keras.applications import VGG16
from tensorflow.keras.applications.vgg16 import preprocess_input
from tensorflow.keras.models import Model
from sklearn.metrics.pairwise import cosine_similarity

# Load the VGG16 model pre-trained on ImageNet and extract features from the 'fc2' layer
base_model = VGG16(weights='imagenet')
model = Model(inputs=base_model.input, outputs=base_model.get_layer('fc2').output)

def preprocess_image(image_path, target_size=(224, 224)):
    """
    Preprocess the image for feature extraction.
    - Resize the image to the target size.
    - Convert the image to an array and expand dimensions.
    - Preprocess using VGG16's preprocess_input.
    """
    # Load and resize the image
    image = cv2.imread(image_path)
    image = cv2.resize(image, target_size)

    # Convert image to array
    image = np.array(image)
    image = np.expand_dims(image, axis=0)

    # Preprocess for VGG16
    image = preprocess_input(image)
    return image

def extract_features(image_path):
    """
    Extract features from the 'fc2' layer of VGG16 for a given image.
    """
    image = preprocess_image(image_path)
    features = model.predict(image)
    return features

def calculate_similarity(image_path1, image_path2):
    """
    Calculate the cosine similarity between two images based on the feature vectors.
    """
    # Extract features for both images
    features1 = extract_features(image_path1)
    features2 = extract_features(image_path2)

    # Calculate cosine similarity
    similarity = cosine_similarity(features1, features2)

    # Convert to percentage
    similarity_percentage = similarity[0][0] * 100
    return similarity_percentage

if __name__ == "__main__":
    # Example Usage:
    image1 = 'images/3.jpeg'  # Change this to your local file path
    image2 = 'images/4.jpeg' # Replace with your image paths

    similarity_score = calculate_similarity(image1, image2)
    print(f"Similarity between images: {similarity_score:.2f}%")
