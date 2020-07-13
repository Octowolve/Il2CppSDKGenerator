#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalMapViewBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalMapView_BR"));
	}

	template <typename T = uintptr_t> T& NewGuidePanel() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& BindWithMapRoot() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& PickUpAreaTemplate() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& AirlineStartPoint() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& AirlineArrow() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& AirCraft() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& Airline() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& AirlineBG() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& AirlineBGLeft() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& PawnToSafePointLineSprite() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AirDropPlaneItemList() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OffPlaneAirDropSprites() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& BaseScaleCenter() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ReviveCardSpriteList() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& VehicleSpriteList() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& ChipMachineTemplate() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& ChipMachineRoot() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& MapMarkTemplate() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& ZombieCarTemplate() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& Background() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& TexturePanel() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& Slider() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& ClickPoint() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PlayerMarks() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PlayerMarksDis() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& MarkLine() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& NotifySelfEffect() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& OutCircle() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& InsideCircle() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = Il2CppList<float>*> T& circleRate() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& FocusSelfBtn() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& MarkSelfBtn() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& DeleteMarkBtn() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& DragClickCollider() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& ZoomBigBtn() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& ZoomSmallBtn() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& ShowMapMarks() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& CloseMapMarks() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& MapMarksPanel() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = bool> T& m_IsFocusOnLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = bool> T& m_bPressingZoomBig() {
		return *(T*)((uintptr_t)this + 0x1B9);
	}
	template <typename T = bool> T& m_bPressingZoomSmall() {
		return *(T*)((uintptr_t)this + 0x1BA);
	}
	template <typename T = float> T& CHECK_PROCESS_DELTATIME() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = float> T& lastPressTime() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> static T& SLIDER_VALUE_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& lastTouchIdx1() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = int32_t> T& lastTouchIdx2() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& lastTouchDis() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> static T& MinScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MaxScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& lastScale() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& currentScale() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = int32_t> T& initialWidth() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = int32_t> T& initialHeight() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& MapBoundUp() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = float> T& MapBoundDown() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = float> T& MapBoundLeft() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = float> T& MapBoundRight() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = int32_t> T& m_panelHeight() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = int32_t> T& LeftOffset() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = Il2CppVector2> T& InitialPos() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& MineSprites() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = bool> T& hasPlayerChangeScale() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = uintptr_t> T& NotifyInitResourceFinished() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = Il2CppVector3> T& TempVector3() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = float> T& GamepadCursorMoveDuration() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = float> T& GamepadCursorRatioX() {
		return *(T*)((uintptr_t)this + 0x21C);
	}
	template <typename T = float> T& GamepadCursorRatioY() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = float> T& MapHeightConfig() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = float> T& UsePadLayoutMinThreshold() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = float> T& bottomSpace() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = uintptr_t> T& BackgroudNormal() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = uintptr_t> T& BackgroudOverHeight() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = uintptr_t> T& UIAnchorTopRight() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& UIAnchorBottomRight() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = uintptr_t> T& BottomControlPanel() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& MarkSetPanel() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = uintptr_t> T& BPadBtn() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = bool> T& m_CustomizeNextTick() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = uintptr_t> T& m_UICamera() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseMapView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Startup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRadarClippingBorder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffectSmokeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSlideChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSlideChangeEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSlideChangeTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndGetTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTouchPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayMarkInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMarkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNormalMarkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawSignMarkItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSignsMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnemyShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressZoomBig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressZoomSmall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSliderDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FocusOnLocalPlayerBaseOnScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SynBindWithMapRootInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MapUIPosToScreenUIPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MapUIToWorldPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMarkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPlayerMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMapTexCenterOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldPosition2MapUIPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScreenPosToMapUIPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RootLocalPosition2ClipPanelLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInBound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInClipPanelArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BoundRestrict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FocusOnPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FocusOnCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocalPosZ0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CustomizeForPad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTacticalPickUpAreaListChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMapMarksPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateShaderParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNotifySelfSpriteEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReActiveUISprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetNotifySelfUISpriteSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAdptiveToxicCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreDeterminedShouldShowEnemyPawnList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OB_TryInitUICamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OB_TryCloseMainCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OB_TryOpenMainCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}

	template <typename T = float> T get_CurrentScale() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2785EE0))(this);
	}
	template <typename T = void> T set_CurrentScale(float value) {
		return ((T (*)(TacticalMapViewBR*, float))(Il2CppBase() + 0x2785EE8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2785FEC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2786094))(this);
	}
	template <typename T = void> T CloseMapView() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2779AB4))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x27867C8))(this);
	}
	template <typename T = bool> T Startup(uintptr_t inGPS) {
		return ((T (*)(TacticalMapViewBR*, uintptr_t))(Il2CppBase() + 0x2786954))(this, inGPS);
	}
	template <typename T = bool> T InitResources() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2786BFC))(this);
	}
	template <typename T = void> T InitBR() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2786A18))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2787D6C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x27880F0))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x27884A8))(this);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x27884B0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(TacticalMapViewBR*, float))(Il2CppBase() + 0x2788824))(this, dt);
	}
	template <typename T = void> T UpdateRadarClippingBorder() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2786E94))(this);
	}
	template <typename T = void> T UpdateEffectSmokeState() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x278A744))(this);
	}
	template <typename T = void> T UpdateSlideChange() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x278A09C))(this);
	}
	template <typename T = void> T UpdateSlideChangeEditor() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x278AC54))(this);
	}
	template <typename T = void> T UpdateSlideChangeTouch() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x278A9B4))(this);
	}
	template <typename T = bool> T CheckAndGetTouch(uintptr_t idx1, uintptr_t idx2) {
		return ((T (*)(TacticalMapViewBR*, uintptr_t, uintptr_t))(Il2CppBase() + 0x278B0E4))(this, idx1, idx2);
	}
	template <typename T = bool> T CheckTouchPos(Il2CppVector2 pos) {
		return ((T (*)(TacticalMapViewBR*, Il2CppVector2))(Il2CppBase() + 0x278AE38))(this, pos);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlayMarkInfoList() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x278B324))(this);
	}
	template <typename T = void> T UpdateMarkInfo() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2788780))(this);
	}
	template <typename T = void> T UpdateNormalMarkInfo() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2790128))(this);
	}
	template <typename T = void> T DrawSignMarkItem(uintptr_t Sign) {
		return ((T (*)(TacticalMapViewBR*, uintptr_t))(Il2CppBase() + 0x2790FF4))(this, Sign);
	}
	template <typename T = void> T UpdateSignsMark() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2791094))(this);
	}
	template <typename T = bool> T UpdateEnemyShowOnMap(uintptr_t inSprite, uintptr_t inPawn, bool onEdge) {
		return ((T (*)(TacticalMapViewBR*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x27912E0))(this, inSprite, inPawn, onEdge);
	}
	template <typename T = void> T OnPressZoomBig(uintptr_t obj, bool bPress) {
		return ((T (*)(TacticalMapViewBR*, uintptr_t, bool))(Il2CppBase() + 0x2779244))(this, obj, bPress);
	}
	template <typename T = void> T OnPressZoomSmall(uintptr_t obj, bool bPress) {
		return ((T (*)(TacticalMapViewBR*, uintptr_t, bool))(Il2CppBase() + 0x2779314))(this, obj, bPress);
	}
	template <typename T = void> T OnSliderDrag() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x277B720))(this);
	}
	template <typename T = void> T OnSliderChange() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x277B3CC))(this);
	}
	template <typename T = void> T FocusOnLocalPlayerBaseOnScale() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2791450))(this);
	}
	template <typename T = void> T OnMapDrag(uintptr_t Obj, Il2CppVector2 offset) {
		return ((T (*)(TacticalMapViewBR*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x2791804))(this, Obj, offset);
	}
	template <typename T = void> T SynBindWithMapRootInfo() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x278A548))(this);
	}
	template <typename T = void> T OnMapClick(uintptr_t Obj) {
		return ((T (*)(TacticalMapViewBR*, uintptr_t))(Il2CppBase() + 0x2791A28))(this, Obj);
	}
	template <typename T = Il2CppVector2> T MapUIPosToScreenUIPos(Il2CppVector2 inMapUIPos) {
		return ((T (*)(TacticalMapViewBR*, Il2CppVector2))(Il2CppBase() + 0x2791D90))(this, inMapUIPos);
	}
	template <typename T = Il2CppVector3> T MapUIToWorldPos(Il2CppVector3 localPos) {
		return ((T (*)(TacticalMapViewBR*, Il2CppVector3))(Il2CppBase() + 0x2791FF0))(this, localPos);
	}
	template <typename T = void> T SetMarkInfo(Il2CppVector2 touchScreenPos) {
		return ((T (*)(TacticalMapViewBR*, Il2CppVector2))(Il2CppBase() + 0x277967C))(this, touchScreenPos);
	}
	template <typename T = void> T AddPlayerMark(Il2CppVector3 SceneWorldPos) {
		return ((T (*)(TacticalMapViewBR*, Il2CppVector3))(Il2CppBase() + 0x2792318))(this, SceneWorldPos);
	}
	template <typename T = void> T UpdateMapTexCenterOffset() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2792658))(this);
	}
	template <typename T = Il2CppVector2> T WorldPosition2MapUIPosition(Il2CppVector3 inSpeicifyLoc) {
		return ((T (*)(TacticalMapViewBR*, Il2CppVector3))(Il2CppBase() + 0x27927BC))(this, inSpeicifyLoc);
	}
	template <typename T = Il2CppVector2> T ScreenPosToMapUIPos(Il2CppVector2 inScreenPos) {
		return ((T (*)(TacticalMapViewBR*, Il2CppVector2))(Il2CppBase() + 0x27928D8))(this, inScreenPos);
	}
	template <typename T = Il2CppVector2> T RootLocalPosition2ClipPanelLocalPosition() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2792B0C))(this);
	}
	template <typename T = bool> T IsInBound(Il2CppVector2 localPosition, int32_t offset) {
		return ((T (*)(TacticalMapViewBR*, Il2CppVector2, int32_t))(Il2CppBase() + 0x2792C50))(this, localPosition, offset);
	}
	template <typename T = bool> T IsInClipPanelArea(Il2CppVector2 screen_Pos) {
		return ((T (*)(TacticalMapViewBR*, Il2CppVector2))(Il2CppBase() + 0x2792124))(this, screen_Pos);
	}
	template <typename T = void> T BoundRestrict() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x278A18C))(this);
	}
	template <typename T = void> T FocusOnPosition(Il2CppVector3 focusPosition) {
		return ((T (*)(TacticalMapViewBR*, Il2CppVector3))(Il2CppBase() + 0x277BB18))(this, focusPosition);
	}
	template <typename T = void> T FocusOnCenter() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2791580))(this);
	}
	template <typename T = void> T SetLocalPosZ0(uintptr_t trans) {
		return ((T (*)(TacticalMapViewBR*, uintptr_t))(Il2CppBase() + 0x2792D78))(this, trans);
	}
	template <typename T = void> T CustomizeForPad() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2789848))(this);
	}
	template <typename T = void> T OnTacticalPickUpAreaListChanged() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x277C2B4))(this);
	}
	template <typename T = void> T ShowMapMarksPanel(bool bShow) {
		return ((T (*)(TacticalMapViewBR*, bool))(Il2CppBase() + 0x277C964))(this, bShow);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2792E64))(this);
	}
	template <typename T = void> T ForceUpdateShaderParam() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2778BC0))(this);
	}
	template <typename T = void> T UpdateNotifySelfSpriteEffect(bool shouldShow) {
		return ((T (*)(TacticalMapViewBR*, bool))(Il2CppBase() + 0x2778F24))(this, shouldShow);
	}
	template <typename T = void> T ReActiveUISprite() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2793478))(this);
	}
	template <typename T = void> T ResetNotifySelfUISpriteSize() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x27931F8))(this);
	}
	template <typename T = void> T SetCurrentScale() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2793878))(this);
	}
	template <typename T = void> T OnAdptiveToxicCircle(int32_t circleSlot) {
		return ((T (*)(TacticalMapViewBR*, int32_t))(Il2CppBase() + 0x2778D80))(this, circleSlot);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(TacticalMapViewBR*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2793924))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(TacticalMapViewBR*, uintptr_t))(Il2CppBase() + 0x2793C34))(this, itemType);
	}
	template <typename T = bool> T PreDeterminedShouldShowEnemyPawnList() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2793D30))(this);
	}
	template <typename T = void> T OB_TryInitUICamera() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2793DD0))(this);
	}
	template <typename T = void> T OB_TryCloseMainCamera() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2787E94))(this);
	}
	template <typename T = void> T OB_TryOpenMainCamera() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2792FDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2793F7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2793F84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShow() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2793F8C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Startup(uintptr_t P0) {
		return ((T (*)(TacticalMapViewBR*, uintptr_t))(Il2CppBase() + 0x2793F90))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_InitResources() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2793F94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2793F98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2793F9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2793FA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TacticalMapViewBR*, float))(Il2CppBase() + 0x2793FA4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateEffectSmokeState() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2793FA8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_UpdateEnemyShowOnMap(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(TacticalMapViewBR*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2793FAC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateMapTexCenterOffset() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2794134))(this);
	}
	template <typename T = Il2CppVector2> T xLuaBaseProxy_WorldPosition2MapUIPosition(Il2CppVector3 P0) {
		return ((T (*)(TacticalMapViewBR*, Il2CppVector3))(Il2CppBase() + 0x2794138))(this, P0);
	}
	template <typename T = Il2CppVector2> T xLuaBaseProxy_ScreenPosToMapUIPos(Il2CppVector2 P0) {
		return ((T (*)(TacticalMapViewBR*, Il2CppVector2))(Il2CppBase() + 0x2794158))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2794170))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_PreDeterminedShouldShowEnemyPawnList() {
		return ((T (*)(TacticalMapViewBR*))(Il2CppBase() + 0x2794178))(this);
	}

};

}
