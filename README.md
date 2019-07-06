# Raytracer

# Specular Lighting

![Alt text](/screenshots/SpecularLighting.png?raw=true "First instance of specular lighting")

Specular lighting is responsible for creating the effect of a shiny surface. Essentially, the brighter the spot on our object, the more aligned the reflected light direction and surface normal. The formula used for determining the reflection direction is derived from the [law of reflection](https://www.scratchapixel.com/lessons/3d-basic-rendering/introduction-to-shading/reflection-refraction-fresnel). 

# Diffused Lighting

![Alt text](/screenshots/DiffusedLighting.png?raw=true "First instance of diffused lighting")

When we shoot our rays from the origin out into our scene and we make contact with an object- how do we determine the color of the pixel at this location? First, we get the sphere's raw color (for us, we store that in a 3D Vector representing RGB). Then, to illuminate the point, we need to figure out two things: the direction of our light source and the surface normal. The total brightness of this spot can be determined by finding the dot product between the normalized direction of the light and the surface normal of our object. The more aligned these two vectors are, the more this point is directly facing the light. 

Once we have the dot product of these two vectors, we scale it by the intensity of our light source. Then, once we have our scaled value, we use it to scale the original color of the object at this point. Doing this will scale the color values of our object to a higher number. When discussing RGB color values, higher numbers represent brighter colors. For example, (0, 0, 0) would represent black while (1, 1, 1) would represent white.
