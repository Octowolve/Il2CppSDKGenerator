#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsLightenUpViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsLightenUpView_En"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ItemInfoList() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelPopulationValue() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ButtonShare() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ScorollbarProgress() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ObjMeteorEffects() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& SpriteAlpha() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ObjSliderEffects() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& SpriteLogo() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& SpriteSlider() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& m_activityDataValue() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_activityData() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tasks() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& shaderGB() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& timeInnterval() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& IsBegin() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& mHeadIcon() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& LabelName() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSliderValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValueToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TasksSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpriteAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetSpriteAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPersonalInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(LiveOpsLightenUpViewEn*, uintptr_t))(Il2CppBase() + 0x34EEF8C))(this, activity);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(LiveOpsLightenUpViewEn*))(Il2CppBase() + 0x34F05C0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(LiveOpsLightenUpViewEn*, float))(Il2CppBase() + 0x34F05C8))(this, dt);
	}
	template <typename T = float> T GetSliderValue() {
		return ((T (*)(LiveOpsLightenUpViewEn*))(Il2CppBase() + 0x34EF734))(this);
	}
	template <typename T = float> T GetValue(int32_t index) {
		return ((T (*)(LiveOpsLightenUpViewEn*, int32_t))(Il2CppBase() + 0x34F0954))(this, index);
	}
	template <typename T = Il2CppString*> T GetValueToString(int32_t ve) {
		return ((T (*)(LiveOpsLightenUpViewEn*, int32_t))(Il2CppBase() + 0x34EF4DC))(this, ve);
	}
	template <typename T = int32_t> T TasksSort(uintptr_t task1, uintptr_t task2) {
		return ((T (*)(LiveOpsLightenUpViewEn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34F0A30))(this, task1, task2);
	}
	template <typename T = void> T SetPos(float vt) {
		return ((T (*)(LiveOpsLightenUpViewEn*, float))(Il2CppBase() + 0x34EFD80))(this, vt);
	}
	template <typename T = void> T SetSpriteAlpha(bool isShow) {
		return ((T (*)(LiveOpsLightenUpViewEn*, bool))(Il2CppBase() + 0x34E99C8))(this, isShow);
	}
	template <typename T = void> T SetSpriteAlpha_1(float at) {
		return ((T (*)(LiveOpsLightenUpViewEn*, float))(Il2CppBase() + 0x34F078C))(this, at);
	}
	template <typename T = void> T SetPersonalInfo() {
		return ((T (*)(LiveOpsLightenUpViewEn*))(Il2CppBase() + 0x34E9320))(this);
	}
	template <typename T = bool> static T UpdateViewm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x34F0B34))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0) {
		return ((T (*)(LiveOpsLightenUpViewEn*, uintptr_t))(Il2CppBase() + 0x34F0B70))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(LiveOpsLightenUpViewEn*, float))(Il2CppBase() + 0x34F0B78))(this, P0);
	}

};

}
