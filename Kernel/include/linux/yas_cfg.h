/*
 * Copyright (c) 2010 Yamaha Corporation
 * 
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 * 
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 * 
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

#ifndef __YAS_CFG_H__
#define __YAS_CFG_H__

#define YAS_MAG_DRIVER_YAS529               (1)
#define YAS_MAG_DRIVER_YAS530               (2)

#define YAS_ACC_DRIVER_ADXL345              (0)
#define YAS_ACC_DRIVER_ADXL346              (1)
#define YAS_ACC_DRIVER_BMA150               (2)
#define YAS_ACC_DRIVER_BMA222               (3)
#define YAS_ACC_DRIVER_BMA250               (4)
#define YAS_ACC_DRIVER_KXSD9                (5)
#define YAS_ACC_DRIVER_KXTE9                (6)
#define YAS_ACC_DRIVER_KXTF9                (7)
#define YAS_ACC_DRIVER_LIS331DL             (8)
#define YAS_ACC_DRIVER_LIS331DLH            (9)
#define YAS_ACC_DRIVER_LIS331DLM            (10)
#define YAS_ACC_DRIVER_LIS3DH               (11)
#define YAS_ACC_DRIVER_MMA8452Q             (12)
#define YAS_ACC_DRIVER_MMA8453Q             (13)

/*----------------------------------------------------------------------------*/
/*                               Configuration                                */
/*----------------------------------------------------------------------------*/

#define YAS_ACC_DRIVER                      (YAS_ACC_DRIVER_BMA222)
#define YAS_MAG_DRIVER                      (YAS_MAG_DRIVER_YAS529)

/*----------------------------------------------------------------------------*/
/*                   Acceleration Calibration Configuration                   */
/*----------------------------------------------------------------------------*/

#define YAS_DEFAULT_ACCCALIB_LENGTH         (20)

#if YAS_ACC_DRIVER == YAS_ACC_DRIVER_ADXL345
#define YAS_DEFAULT_ACCCALIB_DISTORTION     (8000)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_ADXL346
#define YAS_DEFAULT_ACCCALIB_DISTORTION     (4000)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_BMA150
#define YAS_DEFAULT_ACCCALIB_DISTORTION     (4000)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_BMA222
#define YAS_DEFAULT_ACCCALIB_DISTORTION     (25000)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_KXSD9
#define YAS_DEFAULT_ACCCALIB_DISTORTION     (80000)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_KXTE9
#define YAS_DEFAULT_ACCCALIB_DISTORTION     (400000)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_KXTF9
#define YAS_DEFAULT_ACCCALIB_DISTORTION     (2000)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_LIS331DL
#define YAS_DEFAULT_ACCCALIB_DISTORTION     (17000)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_LIS331DLH
#define YAS_DEFAULT_ACCCALIB_DISTORTION     (6000)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_LIS331DLM
#define YAS_DEFAULT_ACCCALIB_DISTORTION     (28000)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_LIS3DH
#define YAS_DEFAULT_ACCCALIB_DISTORTION     (18000)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_MMA8453Q
#define YAS_DEFAULT_ACCCALIB_DISTORTION     (1000)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_MMA8452Q
#define YAS_DEFAULT_ACCCALIB_DISTORTION     (1000)
#endif

#if YAS_ACC_DRIVER == YAS_ACC_DRIVER_ADXL345
#define YAS_ACC_I2C_SLAVEADDR               (0x53)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_ADXL346
#define YAS_ACC_I2C_SLAVEADDR               (0x53)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_BMA150
#define YAS_ACC_I2C_SLAVEADDR               (0x38)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_BMA222
#define YAS_ACC_I2C_SLAVEADDR               (0x08)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_BMA250
#define YAS_ACC_I2C_SLAVEADDR               (0x18)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_KXSD9
#define YAS_ACC_I2C_SLAVEADDR               (0x18)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_KXTE9
#define YAS_ACC_I2C_SLAVEADDR               (0x0f)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_KXTF9
#define YAS_ACC_I2C_SLAVEADDR               (0x0f)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_LIS331DL
#define YAS_ACC_I2C_SLAVEADDR               (0x1c)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_LIS331DLH
#define YAS_ACC_I2C_SLAVEADDR               (0x18)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_LIS331DLM
#define YAS_ACC_I2C_SLAVEADDR               (0x08)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_LIS3DH
#define YAS_ACC_I2C_SLAVEADDR               (0x18)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_MMA8453Q
#define YAS_ACC_I2C_SLAVEADDR               (0x1c)
#elif YAS_ACC_DRIVER == YAS_ACC_DRIVER_MMA8452Q
#define YAS_ACC_I2C_SLAVEADDR               (0x1c)
#endif
/*----------------------------------------------------------------------------*/
/*                    Geomagnetic Calibration Configuration                   */
/*----------------------------------------------------------------------------*/

#define YAS_DEFAULT_MAGCALIB_THRESHOLD      (1)
#define YAS_DEFAULT_MAGCALIB_DISTORTION     (15)
#define YAS_DEFAULT_MAGCALIB_SHAPE          (0)
#define YAS_MAGCALIB_SHAPE_NUM              (2)

/*----------------------------------------------------------------------------*/
/*                      Geomagnetic Filter Configuration                      */
/*----------------------------------------------------------------------------*/

#define YAS_MAG_MAX_FILTER_LEN              (30)
#define YAS_MAG_I2C_SLAVEADDR               (0x2e)

#if YAS_MAG_DRIVER == YAS_MAG_DRIVER_YAS529
#define YAS_MAG_DEFAULT_FILTER_NOISE_X      (100) /* sd: 1000 nT */
#define YAS_MAG_DEFAULT_FILTER_NOISE_Y      (100) /* sd: 1000 nT */
#define YAS_MAG_DEFAULT_FILTER_NOISE_Z      (100) /* sd: 1000 nT */
#define YAS_MAG_DEFAULT_FILTER_LEN          (20)
#define YAS_MAG_DEFAULT_FILTER_THRESH       (300)
#elif YAS_MAG_DRIVER == YAS_MAG_DRIVER_YAS530
#define YAS_MAG_DEFAULT_FILTER_NOISE_X      (16) /* sd: 400 nT */
#define YAS_MAG_DEFAULT_FILTER_NOISE_Y      (16) /* sd: 400 nT */
#define YAS_MAG_DEFAULT_FILTER_NOISE_Z      (16) /* sd: 400 nT */
#define YAS_MAG_DEFAULT_FILTER_LEN          (10)
#define YAS_MAG_DEFAULT_FILTER_THRESH       (100)
#endif

#endif
