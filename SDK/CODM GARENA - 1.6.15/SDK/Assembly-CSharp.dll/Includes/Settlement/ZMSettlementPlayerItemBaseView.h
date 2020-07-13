#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class ZMSettlementPlayerItemBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "ZMSettlementPlayerItemBaseView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ShowItems() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& BtnMore() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& BtnSpread() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& ObjSpreadRoot() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& ObjMoreRoot() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& LabelMore() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& LabelMoreNum() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& TemplateGainItemView() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& GridGainItemRoot() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& num() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& m_ColorNameLocal() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& m_ColorName() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& m_ColorLevelLocal() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& m_ColorLevel() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& m_ColorMoreLocal() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& m_ColorMore() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGainItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGainItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMoreClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSpreadClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMSettlementPlayerItemBaseView*))(Il2CppBase() + 0x298BB28))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t playerInfo, uint64_t matchGuid, uintptr_t gameMode) {
		return ((T (*)(ZMSettlementPlayerItemBaseView*, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x298773C))(this, playerInfo, matchGuid, gameMode);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetGainItems(uintptr_t playerInfo) {
		return ((T (*)(ZMSettlementPlayerItemBaseView*, uintptr_t))(Il2CppBase() + 0x2986BFC))(this, playerInfo);
	}
	template <typename T = void> T SetGainItems(uintptr_t playerInfo) {
		return ((T (*)(ZMSettlementPlayerItemBaseView*, uintptr_t))(Il2CppBase() + 0x298BDA4))(this, playerInfo);
	}
	template <typename T = void> T SetColor(bool bLocalPlayer) {
		return ((T (*)(ZMSettlementPlayerItemBaseView*, bool))(Il2CppBase() + 0x298C534))(this, bLocalPlayer);
	}
	template <typename T = void> T OnBtnMoreClick() {
		return ((T (*)(ZMSettlementPlayerItemBaseView*))(Il2CppBase() + 0x298C7BC))(this);
	}
	template <typename T = void> T OnBtnSpreadClick() {
		return ((T (*)(ZMSettlementPlayerItemBaseView*))(Il2CppBase() + 0x298C8A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMSettlementPlayerItemBaseView*))(Il2CppBase() + 0x298C994))(this);
	}

};

}
