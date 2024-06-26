/*******************************************************************************
* File Name: SW3.h  
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

#if !defined(CY_PINS_SW3_H) /* Pins SW3_H */
#define CY_PINS_SW3_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "SW3_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    SW3_Write(uint8 value) ;
void    SW3_SetDriveMode(uint8 mode) ;
uint8   SW3_ReadDataReg(void) ;
uint8   SW3_Read(void) ;
void    SW3_SetInterruptMode(uint16 position, uint16 mode) ;
uint8   SW3_ClearInterrupt(void) ;
/** @} general */

/***************************************
*           API Constants        
***************************************/

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the SW3_SetDriveMode() function.
     *  @{
     */
        /* Drive Modes */
        #define SW3_DM_ALG_HIZ         PIN_DM_ALG_HIZ   /**< \brief High Impedance Analog   */
        #define SW3_DM_DIG_HIZ         PIN_DM_DIG_HIZ   /**< \brief High Impedance Digital  */
        #define SW3_DM_RES_UP          PIN_DM_RES_UP    /**< \brief Resistive Pull Up       */
        #define SW3_DM_RES_DWN         PIN_DM_RES_DWN   /**< \brief Resistive Pull Down     */
        #define SW3_DM_OD_LO           PIN_DM_OD_LO     /**< \brief Open Drain, Drives Low  */
        #define SW3_DM_OD_HI           PIN_DM_OD_HI     /**< \brief Open Drain, Drives High */
        #define SW3_DM_STRONG          PIN_DM_STRONG    /**< \brief Strong Drive            */
        #define SW3_DM_RES_UPDWN       PIN_DM_RES_UPDWN /**< \brief Resistive Pull Up/Down  */
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define SW3_MASK               SW3__MASK
#define SW3_SHIFT              SW3__SHIFT
#define SW3_WIDTH              1u

/* Interrupt constants */
#if defined(SW3__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in SW3_SetInterruptMode() function.
     *  @{
     */
        #define SW3_INTR_NONE      (uint16)(0x0000u)   /**< \brief Disabled             */
        #define SW3_INTR_RISING    (uint16)(0x0001u)   /**< \brief Rising edge trigger  */
        #define SW3_INTR_FALLING   (uint16)(0x0002u)   /**< \brief Falling edge trigger */
        #define SW3_INTR_BOTH      (uint16)(0x0003u)   /**< \brief Both edge trigger    */
        /** @} intrMode */
/** @} group_constants */

    #define SW3_INTR_MASK      (0x01u)
#endif /* (SW3__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define SW3_PS                     (* (reg8 *) SW3__PS)
/* Data Register */
#define SW3_DR                     (* (reg8 *) SW3__DR)
/* Port Number */
#define SW3_PRT_NUM                (* (reg8 *) SW3__PRT) 
/* Connect to Analog Globals */                                                  
#define SW3_AG                     (* (reg8 *) SW3__AG)                       
/* Analog MUX bux enable */
#define SW3_AMUX                   (* (reg8 *) SW3__AMUX) 
/* Bidirectional Enable */                                                        
#define SW3_BIE                    (* (reg8 *) SW3__BIE)
/* Bit-mask for Aliased Register Access */
#define SW3_BIT_MASK               (* (reg8 *) SW3__BIT_MASK)
/* Bypass Enable */
#define SW3_BYP                    (* (reg8 *) SW3__BYP)
/* Port wide control signals */                                                   
#define SW3_CTL                    (* (reg8 *) SW3__CTL)
/* Drive Modes */
#define SW3_DM0                    (* (reg8 *) SW3__DM0) 
#define SW3_DM1                    (* (reg8 *) SW3__DM1)
#define SW3_DM2                    (* (reg8 *) SW3__DM2) 
/* Input Buffer Disable Override */
#define SW3_INP_DIS                (* (reg8 *) SW3__INP_DIS)
/* LCD Common or Segment Drive */
#define SW3_LCD_COM_SEG            (* (reg8 *) SW3__LCD_COM_SEG)
/* Enable Segment LCD */
#define SW3_LCD_EN                 (* (reg8 *) SW3__LCD_EN)
/* Slew Rate Control */
#define SW3_SLW                    (* (reg8 *) SW3__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define SW3_PRTDSI__CAPS_SEL       (* (reg8 *) SW3__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define SW3_PRTDSI__DBL_SYNC_IN    (* (reg8 *) SW3__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define SW3_PRTDSI__OE_SEL0        (* (reg8 *) SW3__PRTDSI__OE_SEL0) 
#define SW3_PRTDSI__OE_SEL1        (* (reg8 *) SW3__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define SW3_PRTDSI__OUT_SEL0       (* (reg8 *) SW3__PRTDSI__OUT_SEL0) 
#define SW3_PRTDSI__OUT_SEL1       (* (reg8 *) SW3__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define SW3_PRTDSI__SYNC_OUT       (* (reg8 *) SW3__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(SW3__SIO_CFG)
    #define SW3_SIO_HYST_EN        (* (reg8 *) SW3__SIO_HYST_EN)
    #define SW3_SIO_REG_HIFREQ     (* (reg8 *) SW3__SIO_REG_HIFREQ)
    #define SW3_SIO_CFG            (* (reg8 *) SW3__SIO_CFG)
    #define SW3_SIO_DIFF           (* (reg8 *) SW3__SIO_DIFF)
#endif /* (SW3__SIO_CFG) */

/* Interrupt Registers */
#if defined(SW3__INTSTAT)
    #define SW3_INTSTAT             (* (reg8 *) SW3__INTSTAT)
    #define SW3_SNAP                (* (reg8 *) SW3__SNAP)
    
	#define SW3_0_INTTYPE_REG 		(* (reg8 *) SW3__0__INTTYPE)
#endif /* (SW3__INTSTAT) */

#endif /* End Pins SW3_H */


/* [] END OF FILE */
