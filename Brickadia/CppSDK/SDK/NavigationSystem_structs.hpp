﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavigationSystem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum NavigationSystem.ENavLinkBuilderFlags
// NumValues: 0x0003
enum class ENavLinkBuilderFlags : uint8
{
	CreateCenterPointLink                    = 1,
	CreateExtremityLink                      = 2,
	ENavLinkBuilderFlags_MAX                 = 3,
};

// Enum NavigationSystem.ELinkGenerationDebugFlags
// NumValues: 0x0009
enum class ELinkGenerationDebugFlags : uint8
{
	WalkableSurface                          = 1,
	WalkableBorders                          = 2,
	SelectedEdge                             = 4,
	SelectedEdgeTrajectory                   = 8,
	SelectedEdgeLandingSamples               = 16,
	SelectedEdgeCollisions                   = 32,
	Links                                    = 64,
	FilteredLinks                            = 128,
	ELinkGenerationDebugFlags_MAX            = 129,
};

// Enum NavigationSystem.ERuntimeGenerationType
// NumValues: 0x0005
enum class ERuntimeGenerationType : uint8
{
	Static                                   = 0,
	DynamicModifiersOnly                     = 1,
	Dynamic                                  = 2,
	LegacyGeneration                         = 3,
	ERuntimeGenerationType_MAX               = 4,
};

// Enum NavigationSystem.ENavCostDisplay
// NumValues: 0x0004
enum class ENavCostDisplay : uint8
{
	TotalCost                                = 0,
	HeuristicOnly                            = 1,
	RealCostOnly                             = 2,
	ENavCostDisplay_MAX                      = 3,
};

// Enum NavigationSystem.ERecastPartitioning
// NumValues: 0x0004
enum class ERecastPartitioning : uint8
{
	Monotone                                 = 0,
	Watershed                                = 1,
	ChunkyMonotone                           = 2,
	ERecastPartitioning_MAX                  = 3,
};

// Enum NavigationSystem.ENavigationLedgeSlopeFilterMode
// NumValues: 0x0004
enum class ENavigationLedgeSlopeFilterMode : uint8
{
	Recast                                   = 0,
	None                                     = 1,
	UseStepHeightFromAgentMaxSlope           = 2,
	ENavigationLedgeSlopeFilterMode_MAX      = 3,
};

// Enum NavigationSystem.EHeightFieldRenderMode
// NumValues: 0x0003
enum class EHeightFieldRenderMode : uint8
{
	Solid                                    = 0,
	Walkable                                 = 1,
	EHeightFieldRenderMode_MAX               = 2,
};

// Enum NavigationSystem.ENavSystemOverridePolicy
// NumValues: 0x0004
enum class ENavSystemOverridePolicy : uint8
{
	Override                                 = 0,
	Append                                   = 1,
	Skip                                     = 2,
	ENavSystemOverridePolicy_MAX             = 3,
};

// Enum NavigationSystem.ESubdivisionLOD
// NumValues: 0x0005
enum class ESubdivisionLOD : uint32
{
	Low                                      = 0,
	Medium                                   = 1,
	High                                     = 2,
	Ultra                                    = 3,
	ESubdivisionLOD_MAX                      = 4,
};

// ScriptStruct NavigationSystem.NavLinkGenerationJumpDownConfig
// 0x0050 (0x0050 - 0x0000)
struct FNavLinkGenerationJumpDownConfig final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         JumpLength;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JumpDistanceFromEdge;                              // 0x0008(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JumpMaxDepth;                                      // 0x000C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JumpHeight;                                        // 0x0010(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JumpEndsHeightTolerance;                           // 0x0014(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SamplingSeparationFactor;                          // 0x0018(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FilterDistanceThreshold;                           // 0x001C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        LinkBuilderFlags;                                  // 0x0020(0x0002)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UNavAreaBase>               AreaClass;                                         // 0x0028(0x0008)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UBaseGeneratedNavLinksProxy> LinkProxyClass;                                    // 0x0030(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavLinkId                             LinkProxyId;                                       // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBaseGeneratedNavLinksProxy*            LinkProxy;                                         // 0x0040(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLinkProxyRegistered;                              // 0x0048(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavLinkGenerationJumpDownConfig) == 0x000008, "Wrong alignment on FNavLinkGenerationJumpDownConfig");
static_assert(sizeof(FNavLinkGenerationJumpDownConfig) == 0x000050, "Wrong size on FNavLinkGenerationJumpDownConfig");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, bEnabled) == 0x000000, "Member 'FNavLinkGenerationJumpDownConfig::bEnabled' has a wrong offset!");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, JumpLength) == 0x000004, "Member 'FNavLinkGenerationJumpDownConfig::JumpLength' has a wrong offset!");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, JumpDistanceFromEdge) == 0x000008, "Member 'FNavLinkGenerationJumpDownConfig::JumpDistanceFromEdge' has a wrong offset!");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, JumpMaxDepth) == 0x00000C, "Member 'FNavLinkGenerationJumpDownConfig::JumpMaxDepth' has a wrong offset!");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, JumpHeight) == 0x000010, "Member 'FNavLinkGenerationJumpDownConfig::JumpHeight' has a wrong offset!");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, JumpEndsHeightTolerance) == 0x000014, "Member 'FNavLinkGenerationJumpDownConfig::JumpEndsHeightTolerance' has a wrong offset!");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, SamplingSeparationFactor) == 0x000018, "Member 'FNavLinkGenerationJumpDownConfig::SamplingSeparationFactor' has a wrong offset!");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, FilterDistanceThreshold) == 0x00001C, "Member 'FNavLinkGenerationJumpDownConfig::FilterDistanceThreshold' has a wrong offset!");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, LinkBuilderFlags) == 0x000020, "Member 'FNavLinkGenerationJumpDownConfig::LinkBuilderFlags' has a wrong offset!");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, AreaClass) == 0x000028, "Member 'FNavLinkGenerationJumpDownConfig::AreaClass' has a wrong offset!");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, LinkProxyClass) == 0x000030, "Member 'FNavLinkGenerationJumpDownConfig::LinkProxyClass' has a wrong offset!");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, LinkProxyId) == 0x000038, "Member 'FNavLinkGenerationJumpDownConfig::LinkProxyId' has a wrong offset!");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, LinkProxy) == 0x000040, "Member 'FNavLinkGenerationJumpDownConfig::LinkProxy' has a wrong offset!");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, bLinkProxyRegistered) == 0x000048, "Member 'FNavLinkGenerationJumpDownConfig::bLinkProxyRegistered' has a wrong offset!");

// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x0020 (0x0020 - 0x0000)
struct FNavCollisionCylinder final
{
public:
	struct FVector                                Offset;                                            // 0x0000(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Height;                                            // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNavCollisionCylinder) == 0x000008, "Wrong alignment on FNavCollisionCylinder");
static_assert(sizeof(FNavCollisionCylinder) == 0x000020, "Wrong size on FNavCollisionCylinder");
static_assert(offsetof(FNavCollisionCylinder, Offset) == 0x000000, "Member 'FNavCollisionCylinder::Offset' has a wrong offset!");
static_assert(offsetof(FNavCollisionCylinder, Radius) == 0x000018, "Member 'FNavCollisionCylinder::Radius' has a wrong offset!");
static_assert(offsetof(FNavCollisionCylinder, Height) == 0x00001C, "Member 'FNavCollisionCylinder::Height' has a wrong offset!");

// ScriptStruct NavigationSystem.NavCollisionBox
// 0x0030 (0x0030 - 0x0000)
struct FNavCollisionBox final
{
public:
	struct FVector                                Offset;                                            // 0x0000(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Extent;                                            // 0x0018(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNavCollisionBox) == 0x000008, "Wrong alignment on FNavCollisionBox");
static_assert(sizeof(FNavCollisionBox) == 0x000030, "Wrong size on FNavCollisionBox");
static_assert(offsetof(FNavCollisionBox, Offset) == 0x000000, "Member 'FNavCollisionBox::Offset' has a wrong offset!");
static_assert(offsetof(FNavCollisionBox, Extent) == 0x000018, "Member 'FNavCollisionBox::Extent' has a wrong offset!");

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x0018 (0x0018 - 0x0000)
struct FNavigationFilterArea final
{
public:
	TSubclassOf<class UNavArea>                   AreaClass;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TravelCostOverride;                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EnteringCostOverride;                              // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsExcluded : 1;                                   // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideTravelCost : 1;                           // 0x0010(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideEnteringCost : 1;                         // 0x0010(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavigationFilterArea) == 0x000008, "Wrong alignment on FNavigationFilterArea");
static_assert(sizeof(FNavigationFilterArea) == 0x000018, "Wrong size on FNavigationFilterArea");
static_assert(offsetof(FNavigationFilterArea, AreaClass) == 0x000000, "Member 'FNavigationFilterArea::AreaClass' has a wrong offset!");
static_assert(offsetof(FNavigationFilterArea, TravelCostOverride) == 0x000008, "Member 'FNavigationFilterArea::TravelCostOverride' has a wrong offset!");
static_assert(offsetof(FNavigationFilterArea, EnteringCostOverride) == 0x00000C, "Member 'FNavigationFilterArea::EnteringCostOverride' has a wrong offset!");

// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FNavigationFilterFlags final
{
public:
	uint8                                         bNavFlag0 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag1 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag2 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag3 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag4 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag5 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag6 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag7 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag8 : 1;                                     // 0x0001(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag9 : 1;                                     // 0x0001(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag10 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag11 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag12 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag13 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag14 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag15 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavigationFilterFlags) == 0x000004, "Wrong alignment on FNavigationFilterFlags");
static_assert(sizeof(FNavigationFilterFlags) == 0x000004, "Wrong size on FNavigationFilterFlags");

// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FNavGraphEdge final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavGraphEdge) == 0x000008, "Wrong alignment on FNavGraphEdge");
static_assert(sizeof(FNavGraphEdge) == 0x000018, "Wrong size on FNavGraphEdge");

// ScriptStruct NavigationSystem.NavGraphNode
// 0x0018 (0x0018 - 0x0000)
struct FNavGraphNode final
{
public:
	class UObject*                                Owner;                                             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x10];                                       // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavGraphNode) == 0x000008, "Wrong alignment on FNavGraphNode");
static_assert(sizeof(FNavGraphNode) == 0x000018, "Wrong size on FNavGraphNode");
static_assert(offsetof(FNavGraphNode, Owner) == 0x000000, "Member 'FNavGraphNode::Owner' has a wrong offset!");

// ScriptStruct NavigationSystem.SupportedAreaData
// 0x0020 (0x0020 - 0x0000)
struct FSupportedAreaData final
{
public:
	class FString                                 AreaClassName;                                     // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AreaID;                                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    AreaClass;                                         // 0x0018(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSupportedAreaData) == 0x000008, "Wrong alignment on FSupportedAreaData");
static_assert(sizeof(FSupportedAreaData) == 0x000020, "Wrong size on FSupportedAreaData");
static_assert(offsetof(FSupportedAreaData, AreaClassName) == 0x000000, "Member 'FSupportedAreaData::AreaClassName' has a wrong offset!");
static_assert(offsetof(FSupportedAreaData, AreaID) == 0x000010, "Member 'FSupportedAreaData::AreaID' has a wrong offset!");
static_assert(offsetof(FSupportedAreaData, AreaClass) == 0x000018, "Member 'FSupportedAreaData::AreaClass' has a wrong offset!");

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// 0x0010 (0x0078 - 0x0068)
struct FNavLinkCustomInstanceData final : public FActorComponentInstanceData
{
public:
	struct FNavLinkId                             CustomLinkId;                                      // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavLinkAuxiliaryId                    AuxiliaryCustomLinkId;                             // 0x0070(0x0008)(NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNavLinkCustomInstanceData) == 0x000008, "Wrong alignment on FNavLinkCustomInstanceData");
static_assert(sizeof(FNavLinkCustomInstanceData) == 0x000078, "Wrong size on FNavLinkCustomInstanceData");
static_assert(offsetof(FNavLinkCustomInstanceData, CustomLinkId) == 0x000068, "Member 'FNavLinkCustomInstanceData::CustomLinkId' has a wrong offset!");
static_assert(offsetof(FNavLinkCustomInstanceData, AuxiliaryCustomLinkId) == 0x000070, "Member 'FNavLinkCustomInstanceData::AuxiliaryCustomLinkId' has a wrong offset!");

// ScriptStruct NavigationSystem.RecastNavMeshTileGenerationDebug
// 0x0024 (0x0024 - 0x0000)
struct FRecastNavMeshTileGenerationDebug final
{
public:
	uint8                                         bEnabled : 1;                                      // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntVector                             TileCoordinate;                                    // 0x0004(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bGenerateDebugTileOnly : 1;                        // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCollisionGeometry : 1;                            // 0x0010(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EHeightFieldRenderMode                        HeightFieldRenderMode;                             // 0x0014(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bHeightfieldFromRasterization : 1;                 // 0x0018(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHeightfieldPostInclusionBoundsFiltering : 1;      // 0x0018(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHeightfieldPostHeightFiltering : 1;               // 0x0018(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHeightfieldBounds : 1;                            // 0x0018(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCompactHeightfield : 1;                           // 0x0018(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCompactHeightfieldEroded : 1;                     // 0x0018(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHeightFieldLayers : 1;                            // 0x0018(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCompactHeightfieldRegions : 1;                    // 0x0018(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCompactHeightfieldDistances : 1;                  // 0x0019(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCacheLayerAreas : 1;                          // 0x0019(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCacheLayerRegions : 1;                        // 0x0019(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSkipContourSimplification : 1;                    // 0x0019(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCacheContours : 1;                            // 0x0019(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCachePolyMesh : 1;                            // 0x0019(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCacheDetailMesh : 1;                          // 0x0019(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	uint16                                        LinkGenerationDebugFlags;                          // 0x001C(0x0002)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LinkGenerationSelectedEdge;                        // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRecastNavMeshTileGenerationDebug) == 0x000004, "Wrong alignment on FRecastNavMeshTileGenerationDebug");
static_assert(sizeof(FRecastNavMeshTileGenerationDebug) == 0x000024, "Wrong size on FRecastNavMeshTileGenerationDebug");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, TileCoordinate) == 0x000004, "Member 'FRecastNavMeshTileGenerationDebug::TileCoordinate' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, HeightFieldRenderMode) == 0x000014, "Member 'FRecastNavMeshTileGenerationDebug::HeightFieldRenderMode' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, LinkGenerationDebugFlags) == 0x00001C, "Member 'FRecastNavMeshTileGenerationDebug::LinkGenerationDebugFlags' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, LinkGenerationSelectedEdge) == 0x000020, "Member 'FRecastNavMeshTileGenerationDebug::LinkGenerationSelectedEdge' has a wrong offset!");

// ScriptStruct NavigationSystem.NavMeshResolutionParam
// 0x000C (0x000C - 0x0000)
struct FNavMeshResolutionParam final
{
public:
	float                                         CellSize;                                          // 0x0000(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CellHeight;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AgentMaxStepHeight;                                // 0x0008(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNavMeshResolutionParam) == 0x000004, "Wrong alignment on FNavMeshResolutionParam");
static_assert(sizeof(FNavMeshResolutionParam) == 0x00000C, "Wrong size on FNavMeshResolutionParam");
static_assert(offsetof(FNavMeshResolutionParam, CellSize) == 0x000000, "Member 'FNavMeshResolutionParam::CellSize' has a wrong offset!");
static_assert(offsetof(FNavMeshResolutionParam, CellHeight) == 0x000004, "Member 'FNavMeshResolutionParam::CellHeight' has a wrong offset!");
static_assert(offsetof(FNavMeshResolutionParam, AgentMaxStepHeight) == 0x000008, "Member 'FNavMeshResolutionParam::AgentMaxStepHeight' has a wrong offset!");

}

