#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BonusScoreLabelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BonusScoreLabelView"));
	}

	template <typename T = uintptr_t> T& m_BonusTypeSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_BonusTypeDescLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTypeSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTypeDescString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetTypeSprite(Il2CppString* typeicon) {
		return ((T (*)(BonusScoreLabelView*, Il2CppString*))(Il2CppBase() + 0x35BFEBC))(this, typeicon);
	}
	template <typename T = void> T SetTypeDescString(Il2CppString* desc) {
		return ((T (*)(BonusScoreLabelView*, Il2CppString*))(Il2CppBase() + 0x35BFFE8))(this, desc);
	}

};

}
