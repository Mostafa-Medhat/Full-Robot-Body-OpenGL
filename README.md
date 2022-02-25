# Assignment 2 :Computer Graphics Full Body Movement

- the main idea of this assignment was to understand lookAt function in opengl and can control it.

- First of all we started by creating a 3D shape and understand the main operations that can be done to it like(translation , rotation , scaling) and trying to compine all of these to make our robotic arm.

- Then we tried to understand stacks very well as it's very important in opengl, and know when to push matrix and when to pop it inorder to have the result we wanted 

- As opengl uses stacks so the operation are operated by the (LIFO) or last in first out so in order to creat a cube and give its scal and transfer it we used the same methods used in the previous assignment.  

- after drawing the full body and apply it's movments as the previous assignment we added the functions that will control the movement of the camera.

- we used several functions as:

```
void rotatePoint(double a[], double theta, double p[])
{

    double temp[3];
    temp[0] = p[0];
    temp[1] = p[1];
    temp[2] = p[2];

    temp[0] = -a[2] * p[1] + a[1] * p[2];
    temp[1] = a[2] * p[0] - a[0] * p[2];
    temp[2] = -a[1] * p[0] + a[0] * p[1];

    temp[0] *= sin(theta);
    temp[1] *= sin(theta);
    temp[2] *= sin(theta);

    temp[0] += (1 - cos(theta)) * (a[0] * a[0] * p[0] + a[0] * a[1] * p[1] + a[0] * a[2] * p[2]);
    temp[1] += (1 - cos(theta)) * (a[0] * a[1] * p[0] + a[1] * a[1] * p[1] + a[1] * a[2] * p[2]);
    temp[2] += (1 - cos(theta)) * (a[0] * a[2] * p[0] + a[1] * a[2] * p[1] + a[2] * a[2] * p[2]);

    temp[0] += cos(theta) * p[0];
    temp[1] += cos(theta) * p[1];
    temp[2] += cos(theta) * p[2];

    p[0] = temp[0];
    p[1] = temp[1];
    p[2] = temp[2];

}
```
this function rotates a point around a given vector and we used it in two camera movments horizontal and vertical.
- for vertical we use the up vector as the vector we rotate about.
- but for the horizontal we had to get the vector first so we used:
```
void crossProduct(double a[], double b[], double c[])
{
    c[0] = a[1] * b[2] - a[2] * b[1];
    c[1] = a[2] * b[0] - a[0] * b[2];
    c[2] = a[0] * b[1] - a[1] * b[0];
}
```
```
void normalize(double a[])
{
    double norm;
    norm = a[0] * a[0] + a[1] * a[1] + a[2] * a[2];
    norm = sqrt(norm);
    a[0] /= norm;
    a[1] /= norm;
    a[2] /= norm;
}
```
```
void hRotation(double a[], double b[], double c[], double theta)
{
    crossProduct(a, b, c);
    normalize(c);
    rotatePoint(c, theta, a);
    rotatePoint(c, theta, b);
}
```

- c is the vector but we should normalize it befor we can use it and then we rotate eye(b) and up(a) around the new c vector

- To control the angle of rotation we used function called keyboard that takes the litter from user and depending on it it change the angle of specefic body part or camera angle which make the user controle it very well

- the keys are used in lower case to move body or camera in one direction and upper case to reverse it. 

- the keys are :
    1. "q,Q" for controlling left shoulder outward rotation , and "a,A" for controlling left shoulder rotation , and "z,Z" for controlling left elbow ,  "1,!" for controlling left shoulder forward and bacward movement, and "y,Y" for controlling all fingers at once (opening or closing).
    1. "r,R" for controlling right shoulder outward rotation , and "f,F" for controlling right shoulder rotation , and "v,V" for controlling right elbow , "2,@" for controlling right shoulder forward and bacward movement, and "h,H" for controlling all fingers at once (opening or closing).
    1. "w,W" for controlling left leg forward , and "s,S" for controlling left leg sideward , and "x,X" for controlling left knee.
    1. "e,E" for controlling right leg forward , and "d,D" for controlling right leg sideward , and "c,C" for controlling right knee.
    1. "k,K" for controlling vertical camera movement.
    1. "n,N" for controlling horizontal camera movement.
    1. "m,M" for controlling forward and backward movement.

# Result Sample:
## Arm Movements:
### Each movement of each arm:
<p align="center">
  <img src="https://drive.google.com/uc?export=view&id=1_d80or2_ZDPsp8PUMzobyXp6Q8EHDmkx">
</p>

### Some combined movements with fingers movement:
<p align="center">
  <img src="https://drive.google.com/uc?export=view&id=19akhZ_auhH8gJmNoE5TFuDDqLnsQedvw">
</p>

## Leg Movements:
### Each movement of each leg:
<p align="center">
  <img src="https://drive.google.com/uc?export=view&id=1MQWbjzDFxHs9g_kinKodthAOaYYpa-Do">
</p>

### Some combined movements of legs:
<p align="center">
  <img src="https://drive.google.com/uc?export=view&id=1vOJOqx-W4KdDqAmLOuXzMG-ou7PT3Frf">
</p>

## Camera Movements:
<p align="center">
  <img src="https://drive.google.com/uc?export=view&id=1LH93VmWMVWHmw-VHnN6mEBA5m8IttJVf">
</p>

# Issues we faced:

- the main issue was to fully understand the functionality of LookAt function and control it and know the consept of vectors and cross product in order to optain the vector that we are going to rotate around.

- another problem was with the function of forward and backward camera movement as to use it we have to change the center in the function LookAt which some times make an issue in the vertical and horizental camera movment.
