#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BaseUIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BaseUIView"));
	}

	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> static T& UnUsedCacheMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& UnUsedCacheRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& ViewCacheInited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& OpenUIViewCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsStarted() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bSupportEasyTouch() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ChildrenCmpList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _CacheWidget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _CachePanel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _CacheColliderList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& BanClickTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& bIsGameHudStateInit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& mActiveGameHudState() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& mInactiveGameHudState() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint64_t> T& mAlwaysShowGameHudState() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_bIsShutDown() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector2> T& m_RealWindowsSize() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_bFullScreen() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_AssetID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& m_ViewID() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& mGameobjeName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> static T& FarAwayZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_OldZ() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& mIsSelfClick() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& mPreAlpha() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& forbidAlpha() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsForbid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryForbidClickBtnInCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActiveGameHudState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInactiveGameHudState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAlwaysShowGameHudState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetGameHudState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameHudState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPanelTransformEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableEasyTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableEasyTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEasyTouchEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterEasyTouchEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_PinchOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_PinchIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_PinchEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_DragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_Drag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanEasyTouchDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_DragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitViewCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetUnUsedUIViewCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableUIViewCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableUIViewCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreMakeRegularViewCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushViewToUnUsedCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryPopUnUsedCacheView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFarAway() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWidgetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOutWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginBanClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCahcheWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBanAlpah() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBanUIState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}

	template <typename T = uintptr_t> T get_m_Owner() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D67854))(this);
	}
	template <typename T = void> T set_m_Owner(uintptr_t value) {
		return ((T (*)(BaseUIView*, uintptr_t))(Il2CppBase() + 0x2D6F588))(this, value);
	}
	template <typename T = void> T SetOwner(uintptr_t owner) {
		return ((T (*)(BaseUIView*, uintptr_t))(Il2CppBase() + 0x2D6F590))(this, owner);
	}
	template <typename T = bool> T HasOwner() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D6F668))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D6F740))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D6F74C))(this);
	}
	template <typename T = bool> T IsForbid(bool islog) {
		return ((T (*)(BaseUIView*, bool))(Il2CppBase() + 0x2D6F820))(this, islog);
	}
	template <typename T = bool> T TryForbidClickBtnInCurrentState(bool isNeedSetTime, bool isNeedSetFireControl, float lockControlTime, float banUI) {
		return ((T (*)(BaseUIView*, bool, bool, float, float))(Il2CppBase() + 0x2D6FA9C))(this, isNeedSetTime, isNeedSetFireControl, lockControlTime, banUI);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D6FF10))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D6FF18))(this);
	}
	template <typename T = uint64_t> T GetActiveGameHudState() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D6FF24))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D70124))(this);
	}
	template <typename T = uint64_t> T GetInactiveGameHudState() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D70130))(this);
	}
	template <typename T = uint64_t> T get_AlwaysShowGameHudState() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D70208))(this);
	}
	template <typename T = uint64_t> T GetAlwaysShowGameHudState() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D70214))(this);
	}
	template <typename T = void> T ResetGameHudState() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D702EC))(this);
	}
	template <typename T = void> T InitGameHudState() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D6FFFC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D703C0))(this);
	}
	template <typename T = void> T ResetPanelTransformEnd() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D70494))(this);
	}
	template <typename T = void> T SetAlpha(float alpha) {
		return ((T (*)(BaseUIView*, float))(Il2CppBase() + 0x2D7055C))(this, alpha);
	}
	template <typename T = bool> T DontCacheFlag() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D708F4))(this);
	}
	template <typename T = void> T EnableEasyTouch() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D709C4))(this);
	}
	template <typename T = void> T DisableEasyTouch() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D70C9C))(this);
	}
	template <typename T = void> T RegisterEasyTouchEvent() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D70DBC))(this);
	}
	template <typename T = void> T UnRegisterEasyTouchEvent() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D71070))(this);
	}
	template <typename T = void> T EasyTouch_On_PinchOut(uintptr_t gesture) {
		return ((T (*)(BaseUIView*, uintptr_t))(Il2CppBase() + 0x2D712DC))(this, gesture);
	}
	template <typename T = void> T EasyTouch_On_PinchIn(uintptr_t gesture) {
		return ((T (*)(BaseUIView*, uintptr_t))(Il2CppBase() + 0x2D71510))(this, gesture);
	}
	template <typename T = void> T EasyTouch_On_PinchEnd(uintptr_t gesture) {
		return ((T (*)(BaseUIView*, uintptr_t))(Il2CppBase() + 0x2D71744))(this, gesture);
	}
	template <typename T = void> T EasyTouch_On_DragStart(uintptr_t gesture) {
		return ((T (*)(BaseUIView*, uintptr_t))(Il2CppBase() + 0x2D71814))(this, gesture);
	}
	template <typename T = void> T EasyTouch_On_Drag(uintptr_t gesture) {
		return ((T (*)(BaseUIView*, uintptr_t))(Il2CppBase() + 0x2D718E4))(this, gesture);
	}
	template <typename T = bool> T CanEasyTouchDrag(uintptr_t pickObj) {
		return ((T (*)(BaseUIView*, uintptr_t))(Il2CppBase() + 0x2D71BE0))(this, pickObj);
	}
	template <typename T = void> T EasyTouch_On_DragEnd(uintptr_t gesture) {
		return ((T (*)(BaseUIView*, uintptr_t))(Il2CppBase() + 0x2D71CB8))(this, gesture);
	}
	template <typename T = Il2CppVector2> T get_RealWindowsSize() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D71D88))(this);
	}
	template <typename T = void> T set_FullScreen(bool value) {
		return ((T (*)(BaseUIView*, bool))(Il2CppBase() + 0x2D71D9C))(this, value);
	}
	template <typename T = uintptr_t> T get_AssetID() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D71DA4))(this);
	}
	template <typename T = void> T set_AssetID(uintptr_t value) {
		return ((T (*)(BaseUIView*, uintptr_t))(Il2CppBase() + 0x2D71DAC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ViewID() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D71DB4))(this);
	}
	template <typename T = void> T SetViewID(Il2CppString* ViewID) {
		return ((T (*)(BaseUIView*, Il2CppString*))(Il2CppBase() + 0x2D71DBC))(this, ViewID);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D71E94))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D71F74))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D7203C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D6E1A8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D72104))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D721F8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D6F0EC))(this);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(BaseUIView*, bool))(Il2CppBase() + 0x2D722C0))(this, paused);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D72390))(this);
	}
	template <typename T = void> T OnGameReconnectSuccess() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D72458))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D72520))(this);
	}
	template <typename T = void> static T InitViewCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D72BBC))(0);
	}
	template <typename T = void> static T ResetUnUsedUIViewCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D72EEC))(0);
	}
	template <typename T = void> static T DisableUIViewCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D73180))(0);
	}
	template <typename T = void> static T EnableUIViewCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D732C8))(0);
	}
	template <typename T = uintptr_t> static T PreMakeRegularViewCache(uintptr_t assetTypeID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3353BE0))(0, assetTypeID);
	}
	template <typename T = void> static T PushViewToUnUsedCache(uintptr_t view) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D72864))(0, view);
	}
	template <typename T = uintptr_t> static T TryPopUnUsedCacheView(uintptr_t assetTypeID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D73410))(0, assetTypeID);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D736B0))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D737A4))(this);
	}
	template <typename T = bool> T get_activeOptimize() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D7386C))(this);
	}
	template <typename T = bool> T IsFarAway() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D73874))(this);
	}
	template <typename T = void> T SetActive(bool value, bool enableOptimize) {
		return ((T (*)(BaseUIView*, bool, bool))(Il2CppBase() + 0x2D739E4))(this, value, enableOptimize);
	}
	template <typename T = void> T SetUIActive(uintptr_t obj, bool isActive) {
		return ((T (*)(BaseUIView*, uintptr_t, bool))(Il2CppBase() + 0x2D73D50))(this, obj, isActive);
	}
	template <typename T = void> T SetUIActive_1(uintptr_t widget, bool isActive) {
		return ((T (*)(BaseUIView*, uintptr_t, bool))(Il2CppBase() + 0x2D73ECC))(this, widget, isActive);
	}
	template <typename T = bool> T IsUIActive(uintptr_t obj) {
		return ((T (*)(BaseUIView*, uintptr_t))(Il2CppBase() + 0x2D74048))(this, obj);
	}
	template <typename T = void> T ShowWidget(uintptr_t rect, bool isActive) {
		return ((T (*)(BaseUIView*, uintptr_t, bool))(Il2CppBase() + 0x2D7419C))(this, rect, isActive);
	}
	template <typename T = bool> T IsWidgetVisible(uintptr_t rect) {
		return ((T (*)(BaseUIView*, uintptr_t))(Il2CppBase() + 0x2D74398))(this, rect);
	}
	template <typename T = void> T FadeOutWidget(uintptr_t rect, float duration) {
		return ((T (*)(BaseUIView*, uintptr_t, float))(Il2CppBase() + 0x2D744B0))(this, rect, duration);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BaseUIView*, float))(Il2CppBase() + 0x2D674F8))(this, dt);
	}
	template <typename T = bool> T get_TickEnabled() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D74654))(this);
	}
	template <typename T = bool> T get_IsDestroyed() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D746B4))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D74760))(this);
	}
	template <typename T = void> T DisableCollider(bool isDisable) {
		return ((T (*)(BaseUIView*, bool))(Il2CppBase() + 0x2D74768))(this, isDisable);
	}
	template <typename T = void> T BeginBanClick(float time) {
		return ((T (*)(BaseUIView*, float))(Il2CppBase() + 0x2D6FD8C))(this, time);
	}
	template <typename T = void> T RegisterButtonClick(uintptr_t BtnGo, uintptr_t func, bool effectEnalbed) {
		return ((T (*)(BaseUIView*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2D74A30))(this, BtnGo, func, effectEnalbed);
	}
	template <typename T = void> T UnRegisterButtonClick(uintptr_t BtnGo, uintptr_t func) {
		return ((T (*)(BaseUIView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D74C58))(this, BtnGo, func);
	}
	template <typename T = uintptr_t> T StartTime(float InInterval, bool bLoop, uintptr_t InTimerDelegate) {
		return ((T (*)(BaseUIView*, float, bool, uintptr_t))(Il2CppBase() + 0x2D74E00))(this, InInterval, bLoop, InTimerDelegate);
	}
	template <typename T = uintptr_t> T GetCahcheWidget() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D74F6C))(this);
	}
	template <typename T = void> T SetBanAlpah(float alpha) {
		return ((T (*)(BaseUIView*, float))(Il2CppBase() + 0x2D7503C))(this, alpha);
	}
	template <typename T = void> T CheckBanUIState() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x2D752A0))(this);
	}

};

}
