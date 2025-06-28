// Import required libraries (make sure to install axios and image-js)
// npm install axios image-js

const axios = require('axios');
const { Image } = require('image-js');

// Function to fetch image from URL
async function fetchImage(url) {
    const response = await axios.get(url, { responseType: 'arraybuffer' });
    const imageData = new Uint8ClampedArray(response.data);
    const img = await Image.load(imageData);
    return img;
}

// Function to calculate similarity using SSIM
async function calculateSimilarity(url1, url2) {
    const img1 = await fetchImage(url1);
    const img2 = await fetchImage(url2);

    // Resize images to the same size (256x256)
    const resizedImg1 = img1.resize({ width: 256, height: 256 });
    const resizedImg2 = img2.resize({ width: 256, height: 256 });

    // Convert images to grayscale
    const grayImg1 = resizedImg1.grey();
    const grayImg2 = resizedImg2.grey();

    // Calculate SSIM
    const ssimResult = grayImg1.ssim(grayImg2);
    return ssimResult * 100; // return percentage
}

// Example usage
const url1 = 'https://example.com/image1.jpg';
const url2 = 'https://example.com/image2.jpg';

calculateSimilarity(url1, url2)
    .then(similarity => {
        console.log(`The similarity between the two images is: ${similarity.toFixed(2)}%`);
    })
    .catch(error => {
        console.error('Error calculating similarity:', error);
    });
