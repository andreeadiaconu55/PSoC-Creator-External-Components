/*******************************************************************************
* File Name: MAX.h  
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

#if !defined(CY_PINS_MAX_H) /* Pins MAX_H */
#define CY_PINS_MAX_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MAX_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MAX__PORT == 15 && ((MAX__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    MAX_Write(uint8 value);
void    MAX_SetDriveMode(uint8 mode);
uint8   MAX_ReadDataReg(void);
uint8   MAX_Read(void);
void    MAX_SetInterruptMode(uint16 position, uint16 mode);
uint8   MAX_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the MAX_SetDriveMode() function.
     *  @{
     */
        #define MAX_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define MAX_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define MAX_DM_RES_UP          PIN_DM_RES_UP
        #define MAX_DM_RES_DWN         PIN_DM_RES_DWN
        #define MAX_DM_OD_LO           PIN_DM_OD_LO
        #define MAX_DM_OD_HI           PIN_DM_OD_HI
        #define MAX_DM_STRONG          PIN_DM_STRONG
        #define MAX_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define MAX_MASK               MAX__MASK
#define MAX_SHIFT              MAX__SHIFT
#define MAX_WIDTH              1u

/* Interrupt constants */
#if defined(MAX__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MAX_SetInterruptMode() function.
     *  @{
     */
        #define MAX_INTR_NONE      (uint16)(0x0000u)
        #define MAX_INTR_RISING    (uint16)(0x0001u)
        #define MAX_INTR_FALLING   (uint16)(0x0002u)
        #define MAX_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define MAX_INTR_MASK      (0x01u) 
#endif /* (MAX__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MAX_PS                     (* (reg8 *) MAX__PS)
/* Data Register */
#define MAX_DR                     (* (reg8 *) MAX__DR)
/* Port Number */
#define MAX_PRT_NUM                (* (reg8 *) MAX__PRT) 
/* Connect to Analog Globals */                                                  
#define MAX_AG                     (* (reg8 *) MAX__AG)                       
/* Analog MUX bux enable */
#define MAX_AMUX                   (* (reg8 *) MAX__AMUX) 
/* Bidirectional Enable */                                                        
#define MAX_BIE                    (* (reg8 *) MAX__BIE)
/* Bit-mask for Aliased Register Access */
#define MAX_BIT_MASK               (* (reg8 *) MAX__BIT_MASK)
/* Bypass Enable */
#define MAX_BYP                    (* (reg8 *) MAX__BYP)
/* Port wide control signals */                                                   
#define MAX_CTL                    (* (reg8 *) MAX__CTL)
/* Drive Modes */
#define MAX_DM0                    (* (reg8 *) MAX__DM0) 
#define MAX_DM1                    (* (reg8 *) MAX__DM1)
#define MAX_DM2                    (* (reg8 *) MAX__DM2) 
/* Input Buffer Disable Override */
#define MAX_INP_DIS                (* (reg8 *) MAX__INP_DIS)
/* LCD Common or Segment Drive */
#define MAX_LCD_COM_SEG            (* (reg8 *) MAX__LCD_COM_SEG)
/* Enable Segment LCD */
#define MAX_LCD_EN                 (* (reg8 *) MAX__LCD_EN)
/* Slew Rate Control */
#define MAX_SLW                    (* (reg8 *) MAX__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MAX_PRTDSI__CAPS_SEL       (* (reg8 *) MAX__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MAX_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MAX__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MAX_PRTDSI__OE_SEL0        (* (reg8 *) MAX__PRTDSI__OE_SEL0) 
#define MAX_PRTDSI__OE_SEL1        (* (reg8 *) MAX__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MAX_PRTDSI__OUT_SEL0       (* (reg8 *) MAX__PRTDSI__OUT_SEL0) 
#define MAX_PRTDSI__OUT_SEL1       (* (reg8 *) MAX__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MAX_PRTDSI__SYNC_OUT       (* (reg8 *) MAX__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(MAX__SIO_CFG)
    #define MAX_SIO_HYST_EN        (* (reg8 *) MAX__SIO_HYST_EN)
    #define MAX_SIO_REG_HIFREQ     (* (reg8 *) MAX__SIO_REG_HIFREQ)
    #define MAX_SIO_CFG            (* (reg8 *) MAX__SIO_CFG)
    #define MAX_SIO_DIFF           (* (reg8 *) MAX__SIO_DIFF)
#endif /* (MAX__SIO_CFG) */

/* Interrupt Registers */
#if defined(MAX__INTSTAT)
    #define MAX_INTSTAT            (* (reg8 *) MAX__INTSTAT)
    #define MAX_SNAP               (* (reg8 *) MAX__SNAP)
    
	#define MAX_0_INTTYPE_REG 		(* (reg8 *) MAX__0__INTTYPE)
#endif /* (MAX__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MAX_H */


/* [] END OF FILE */
