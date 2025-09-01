import type { NextConfig } from "next";

const nextConfig: NextConfig = {
  /* config options here */
  images: {
    remotePatterns: [
      {hostname: "wikipedia.com"}
    ]
  }
};

export default nextConfig;
