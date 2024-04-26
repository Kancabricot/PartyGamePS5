// Fill out your copyright notice in the Description page of Project Settings.


#include "IvyModulDetails.h"

#include "PropertyEditor/Public/DetailLayoutBuilder.h"
#include "PropertyEditor/Public/DetailCategoryBuilder.h"
#include "PropertyEditor/Public/DetailWidgetRow.h"

#include"Widgets/Text/STextBlock.h"
#include"Widgets/Input/SButton.h"

#include "Input/Reply.h"
#include "IvyStatic.h"

TSharedRef<IDetailCustomization> FIvyModulDetails::MakeInstance()
{
	return MakeShareable(new FIvyModulDetails);
}

void FIvyModulDetails::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	
}

FReply FIvyModulDetails::EditObjects()
{
	return FReply::Handled();
}
