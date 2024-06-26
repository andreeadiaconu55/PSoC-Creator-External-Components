/*******************************************************************************
* File Name: LED2.h  
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

#if !defined(CY_PINS_LED2_H) /* Pins LED2_H */
#define CY_PINS_LED2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LED2_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LED2_Write(uint8 value) ;
void    LED2_SetDriveMode(uint8 mode) ;
uint8   LED2_ReadDataReg(void) ;
uint8   LED2_Read(void) ;
void    LED2_SetInterruptMode(uint16 position, uint16 mode) ;
uint8   LED2_ClearInterrupt(void) ;
/** @} general */

/***************************************
*           API Constants        
***************************************/

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LED2_SetDriveMode() function.
     *  @{
     */
        /* Drive Modes */
        #define LED2_DM_ALG_HIZ         PIN_DM_ALG_HIZ   /**< \brief High Impedance Analog   */
        #define LED2_DM_DIG_HIZ         PIN_DM_DIG_HIZ   /**< \brief High Impedance Digital  */
        #define LED2_DM_RES_UP          PIN_DM_RES_UP    /**< \brief Resistive Pull Up       */
        #define LED2_DM_RES_DWN         PIN_DM_RES_DWN   /**< \brief Resistive Pull Down     */
        #define LED2_DM_OD_LO           PIN_DM_OD_LO     /**< \brief Open Drain, Drives Low  */
        #define LED2_DM_OD_HI           PIN_DM_OD_HI     /**< \brief Open Drain, Drives High */
        #define LED2_DM_STRONG          PIN_DM_STRONG    /**< \brief Strong Drive            */
        #define LED2_DM_RES_UPDWN       PIN_DM_RES_UPDWN /**< \brief Resistive Pull Up/Down  */
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LED2_MASK               LED2__MASK
#define LED2_SHIFT              LED2__SHIFT
#define LED2_WIDTH              1u

/* Interrupt constants */
#if defined(LED2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LED2_SetInterruptMode() function.
     *  @{
     */
        #define LED2_INTR_NONE      (uint16)(0x0000u)   /**< \brief Disabled             */
        #define LED2_INTR_RISING    (uint16)(0x0001u)   /**< \brief Rising edge trigger  */
        #define LED2_INTR_FALLING   (uint16)(0x0002u)   /**< \brief Falling edge trigger */
        #define LED2_INTR_BOTH      (uint16)(0x0003u)   /**< \brief Both edge trigger    */
        /** @} intrMode */
/** @} group_constants */

    #define LED2_INTR_MASK      (0x01u)
#endif /* (LED2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LED2_PS                     (* (reg8 *) LED2__PS)
/* Data Register */
#define LED2_DR                     (* (reg8 *) LED2__DR)
/* Port Number */
#define LED2_PRT_NUM                (* (reg8 *) LED2__PRT) 
/* Connect to Analog Globals */                                                  
#define LED2_AG                     (* (reg8 *) LED2__AG)                       
/* Analog MUX bux enable */
#define LED2_AMUX                   (* (reg8 *) LED2__AMUX) 
/* Bidirectional Enable */                                                        
#define LED2_BIE                    (* (reg8 *) LED2__BIE)
/* Bit-mask for Aliased Register Access */
#define LED2_BIT_MASK               (* (reg8 *) LED2__BIT_MASK)
/* Bypass Enable */
#define LED2_BYP                    (* (reg8 *) LED2__BYP)
/* Port wide control signals */                                                   
#define LED2_CTL                    (* (reg8 *) LED2__CTL)
/* Drive Modes */
#define LED2_DM0                    (* (reg8 *) LED2__DM0) 
#define LED2_DM1                    (* (reg8 *) LED2__DM1)
#define LED2_DM2                    (* (reg8 *) LED2__DM2) 
/* Input Buffer Disable Override */
#define LED2_INP_DIS                (* (reg8 *) LED2__INP_DIS)
/* LCD Common or Segment Drive */
#define LED2_LCD_COM_SEG            (* (reg8 *) LED2__LCD_COM_SEG)
/* Enable Segment LCD */
#define LED2_LCD_EN                 (* (reg8 *) LED2__LCD_EN)
/* Slew Rate Control */
#define LED2_SLW                    (* (reg8 *) LED2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LED2_PRTDSI__CAPS_SEL       (* (reg8 *) LED2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LED2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LED2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LED2_PRTDSI__OE_SEL0        (* (reg8 *) LED2__PRTDSI__OE_SEL0) 
#define LED2_PRTDSI__OE_SEL1        (* (reg8 *) LED2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LED2_PRTDSI__OUT_SEL0       (* (reg8 *) LED2__PRTDSI__OUT_SEL0) 
#define LED2_PRTDSI__OUT_SEL1       (* (reg8 *) LED2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LED2_PRTDSI__SYNC_OUT       (* (reg8 *) LED2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LED2__SIO_CFG)
    #define LED2_SIO_HYST_EN        (* (reg8 *) LED2__SIO_HYST_EN)
    #define LED2_SIO_REG_HIFREQ     (* (reg8 *) LED2__SIO_REG_HIFREQ)
    #define LED2_SIO_CFG            (* (reg8 *) LED2__SIO_CFG)
    #define LED2_SIO_DIFF           (* (reg8 *) LED2__SIO_DIFF)
#endif /* (LED2__SIO_CFG) */

/* Interrupt Registers */
#if defined(LED2__INTSTAT)
    #define LED2_INTSTAT             (* (reg8 *) LED2__INTSTAT)
    #define LED2_SNAP                (* (reg8 *) LED2__SNAP)
    
	#define LED2_0_INTTYPE_REG 		(* (reg8 *) LED2__0__INTTYPE)
#endif /* (LED2__INTSTAT) */

#endif /* End Pins LED2_H */


/* [] END OF FILE */
