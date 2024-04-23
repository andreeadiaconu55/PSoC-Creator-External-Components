/*******************************************************************************
* File Name: MIN.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_MIN_H) /* Pins MIN_H */
#define CY_PINS_MIN_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MIN_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MIN__PORT == 15 && ((MIN__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    MIN_Write(uint8 value);
void    MIN_SetDriveMode(uint8 mode);
uint8   MIN_ReadDataReg(void);
uint8   MIN_Read(void);
void    MIN_SetInterruptMode(uint16 position, uint16 mode);
uint8   MIN_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the MIN_SetDriveMode() function.
     *  @{
     */
        #define MIN_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define MIN_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define MIN_DM_RES_UP          PIN_DM_RES_UP
        #define MIN_DM_RES_DWN         PIN_DM_RES_DWN
        #define MIN_DM_OD_LO           PIN_DM_OD_LO
        #define MIN_DM_OD_HI           PIN_DM_OD_HI
        #define MIN_DM_STRONG          PIN_DM_STRONG
        #define MIN_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define MIN_MASK               MIN__MASK
#define MIN_SHIFT              MIN__SHIFT
#define MIN_WIDTH              1u

/* Interrupt constants */
#if defined(MIN__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MIN_SetInterruptMode() function.
     *  @{
     */
        #define MIN_INTR_NONE      (uint16)(0x0000u)
        #define MIN_INTR_RISING    (uint16)(0x0001u)
        #define MIN_INTR_FALLING   (uint16)(0x0002u)
        #define MIN_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define MIN_INTR_MASK      (0x01u) 
#endif /* (MIN__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MIN_PS                     (* (reg8 *) MIN__PS)
/* Data Register */
#define MIN_DR                     (* (reg8 *) MIN__DR)
/* Port Number */
#define MIN_PRT_NUM                (* (reg8 *) MIN__PRT) 
/* Connect to Analog Globals */                                                  
#define MIN_AG                     (* (reg8 *) MIN__AG)                       
/* Analog MUX bux enable */
#define MIN_AMUX                   (* (reg8 *) MIN__AMUX) 
/* Bidirectional Enable */                                                        
#define MIN_BIE                    (* (reg8 *) MIN__BIE)
/* Bit-mask for Aliased Register Access */
#define MIN_BIT_MASK               (* (reg8 *) MIN__BIT_MASK)
/* Bypass Enable */
#define MIN_BYP                    (* (reg8 *) MIN__BYP)
/* Port wide control signals */                                                   
#define MIN_CTL                    (* (reg8 *) MIN__CTL)
/* Drive Modes */
#define MIN_DM0                    (* (reg8 *) MIN__DM0) 
#define MIN_DM1                    (* (reg8 *) MIN__DM1)
#define MIN_DM2                    (* (reg8 *) MIN__DM2) 
/* Input Buffer Disable Override */
#define MIN_INP_DIS                (* (reg8 *) MIN__INP_DIS)
/* LCD Common or Segment Drive */
#define MIN_LCD_COM_SEG            (* (reg8 *) MIN__LCD_COM_SEG)
/* Enable Segment LCD */
#define MIN_LCD_EN                 (* (reg8 *) MIN__LCD_EN)
/* Slew Rate Control */
#define MIN_SLW                    (* (reg8 *) MIN__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MIN_PRTDSI__CAPS_SEL       (* (reg8 *) MIN__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MIN_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MIN__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MIN_PRTDSI__OE_SEL0        (* (reg8 *) MIN__PRTDSI__OE_SEL0) 
#define MIN_PRTDSI__OE_SEL1        (* (reg8 *) MIN__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MIN_PRTDSI__OUT_SEL0       (* (reg8 *) MIN__PRTDSI__OUT_SEL0) 
#define MIN_PRTDSI__OUT_SEL1       (* (reg8 *) MIN__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MIN_PRTDSI__SYNC_OUT       (* (reg8 *) MIN__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(MIN__SIO_CFG)
    #define MIN_SIO_HYST_EN        (* (reg8 *) MIN__SIO_HYST_EN)
    #define MIN_SIO_REG_HIFREQ     (* (reg8 *) MIN__SIO_REG_HIFREQ)
    #define MIN_SIO_CFG            (* (reg8 *) MIN__SIO_CFG)
    #define MIN_SIO_DIFF           (* (reg8 *) MIN__SIO_DIFF)
#endif /* (MIN__SIO_CFG) */

/* Interrupt Registers */
#if defined(MIN__INTSTAT)
    #define MIN_INTSTAT            (* (reg8 *) MIN__INTSTAT)
    #define MIN_SNAP               (* (reg8 *) MIN__SNAP)
    
	#define MIN_0_INTTYPE_REG 		(* (reg8 *) MIN__0__INTTYPE)
#endif /* (MIN__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MIN_H */


/* [] END OF FILE */
