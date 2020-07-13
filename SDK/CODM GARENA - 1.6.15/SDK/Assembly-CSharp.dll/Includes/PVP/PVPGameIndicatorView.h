#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPGameIndicatorView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPGameIndicatorView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_PositionIndicatorSprites() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_PositionIndicatorLabels() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_TeammateDiedIndicatorSprites() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MlkTFEnemySprites() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_PVPGameInfo() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& GuardianColor() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& TraitorColor() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& GuardianColorOutlineColor() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& TraitorColorOutlineColor() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TeammateDiedIndicators() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MlkTFEnemyIndicators() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIndicatorData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMlkTFEnemyIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideIndicatorData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PVPGameIndicatorView*))(Il2CppBase() + 0x2AEA860))(this);
	}
	template <typename T = void> T UpdateIndicatorData(uintptr_t msg) {
		return ((T (*)(PVPGameIndicatorView*, uintptr_t))(Il2CppBase() + 0x2AEAB1C))(this, msg);
	}
	template <typename T = void> T UpdateMlkTFEnemyIndicators() {
		return ((T (*)(PVPGameIndicatorView*))(Il2CppBase() + 0x2AEB07C))(this);
	}
	template <typename T = void> T HideIndicatorData(uintptr_t msg) {
		return ((T (*)(PVPGameIndicatorView*, uintptr_t))(Il2CppBase() + 0x2AEB144))(this, msg);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(PVPGameIndicatorView*))(Il2CppBase() + 0x2AEB2BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PVPGameIndicatorView*))(Il2CppBase() + 0x2AEB3A4))(this);
	}

};

}
