#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRBroadcastTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRBroadcastTipsHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& LabelTemplates() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TemplateStructs() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& EffectStructs() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> T& TipDatas() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Backgroud() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AdjustWidget() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& LeftSpace() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& RightSpace() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_IsShowing() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEffectStruct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTintWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOffEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTipsShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTipsShowImp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNextTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_IsShowing() {
		return ((T (*)(BRBroadcastTipsHUD*))(Il2CppBase() + 0x35C67BC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRBroadcastTipsHUD*))(Il2CppBase() + 0x35C67C4))(this);
	}
	template <typename T = void> T HideAllLabel() {
		return ((T (*)(BRBroadcastTipsHUD*))(Il2CppBase() + 0x35C6974))(this);
	}
	template <typename T = uintptr_t> T GetEffectStruct(Il2CppString* effectName) {
		return ((T (*)(BRBroadcastTipsHUD*, Il2CppString*))(Il2CppBase() + 0x35C6AEC))(this, effectName);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRBroadcastTipsHUD*))(Il2CppBase() + 0x35C6C88))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRBroadcastTipsHUD*))(Il2CppBase() + 0x35C6D90))(this);
	}
	template <typename T = void> T OnTintWidget(uint32_t colorIndex) {
		return ((T (*)(BRBroadcastTipsHUD*, uint32_t))(Il2CppBase() + 0x35C6E40))(this, colorIndex);
	}
	template <typename T = void> T ProcessEffect(uintptr_t data) {
		return ((T (*)(BRBroadcastTipsHUD*, uintptr_t))(Il2CppBase() + 0x35C6F40))(this, data);
	}
	template <typename T = uintptr_t> T ShowOffEffect(uintptr_t s, float showTime) {
		return ((T (*)(BRBroadcastTipsHUD*, uintptr_t, float))(Il2CppBase() + 0x35C71AC))(this, s, showTime);
	}
	template <typename T = void> T HideAllEffect() {
		return ((T (*)(BRBroadcastTipsHUD*))(Il2CppBase() + 0x35C72C4))(this);
	}
	template <typename T = void> T OnTipsShow(uintptr_t msg) {
		return ((T (*)(BRBroadcastTipsHUD*, uintptr_t))(Il2CppBase() + 0x35C7460))(this, msg);
	}
	template <typename T = void> T OnTipsShowImp(uint32_t key, Il2CppArray<uintptr_t>* Params) {
		return ((T (*)(BRBroadcastTipsHUD*, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35C7660))(this, key, Params);
	}
	template <typename T = uintptr_t> T DelayHidden(float showTime) {
		return ((T (*)(BRBroadcastTipsHUD*, float))(Il2CppBase() + 0x35C7EE4))(this, showTime);
	}
	template <typename T = void> T CheckNextTip() {
		return ((T (*)(BRBroadcastTipsHUD*))(Il2CppBase() + 0x35C7FE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRBroadcastTipsHUD*))(Il2CppBase() + 0x35C8108))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRBroadcastTipsHUD*))(Il2CppBase() + 0x35C8110))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRBroadcastTipsHUD*))(Il2CppBase() + 0x35C8118))(this);
	}

};

}
