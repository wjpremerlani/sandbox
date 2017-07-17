// This file is part of MatrixPilot.
//
//    http://code.google.com/p/gentlenav/
//
// Copyright 2009-2011 MatrixPilot Team
// See the AUTHORS.TXT file for a list of authors of MatrixPilot.
//
// MatrixPilot is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// MatrixPilot is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with MatrixPilot.  If not, see <http://www.gnu.org/licenses/>.


int16_t sine(int8_t angle);
int8_t arcsine(int16_t y);  // arcsine takes the y coordinate of an x,y point and returns an angle
int16_t cosine(int8_t angle);

uint16_t sqrt_int(uint16_t sqr);
uint16_t sqrt_long(uint32_t sqr);
int32_t long_scale(int32_t arg1, int16_t arg2);
void VectorCross(int16_t * dest, int16_t * src1, int16_t * src2);

void rotate_2D_vector_by_vector(int16_t vector[2], int16_t rotate[2]);      //-> void vect2_16x16_rotate(vect2_16t* vector, const vect2_16t* rotate);
void rotate_2D_long_vector_by_vector(int32_t vector[2], int16_t rotate[2]); //-> void vect2_32x16_rotate(vect2_32t* vector, const vect2_16t* rotate);
void rotate_2D_vector_by_angle(int16_t vector[2], int8_t angle);            //-> void vect2_16phi_rotate(vect2_16t* vector, int8_t angle);
void rotate_2D(struct relative2D *xy, int8_t angle);     //-> void vect2_16phi_rotate(vect2_16t* vector, int8_t angle);
int8_t rect_to_polar(struct relative2D *xy);             //-> uint8_t vect2_polar(polar_16t* polar, const vect2_16t* vector);
int16_t rect_to_polar16(struct relative2D *xy);          //-> uint16_t vect2_polar_16(polar_16t* polar, const vect2_16t* vector);

uint16_t vector2_mag(int16_t x, int16_t y);                    //-> uint16_t vect2_16_mag(const vect2_16t* vector);
uint16_t vector3_mag(int16_t x, int16_t y, int16_t z);         //-> uint16_t vect3_16_mag(const vect3_16t* vector);
uint16_t vector2_normalize(int16_t result[], int16_t input[]); //-> uint16_t vect2_16_norm(vect2_16t* result, const vect2_16t* vector);
uint16_t vector3_normalize(int16_t result[], int16_t input[]); //-> uint16_t vect3_16_norm(vect3_16t* result, const vect3_16t* vector);

// first changed bit location functions
int16_t FindFirstBitChangeFromLeft(int16_t);    // applies raw FBCL instruction and returns result
int16_t FindFirstBitFromLeft(int16_t);          // applies raw FF1L instruction and returns result
int16_t find_first_bit_int16(int16_t);          // finds first bit position in the absolute value of a 16 bit signed integer
int16_t find_first_bit_int32(int32_t);          // finds first bit position in the absolute value of a 32 bit signed integer
