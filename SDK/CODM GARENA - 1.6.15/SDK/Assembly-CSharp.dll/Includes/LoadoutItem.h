#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadoutItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadoutItem"));
	}

	template <typename T = uintptr_t> T& SpriteLock() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& SpriteUnlock() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Objs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetState(int32_t loadoutSeq, int32_t unlockSeq) {
		return ((T (*)(LoadoutItem*, int32_t, int32_t))(Il2CppBase() + 0x41ED8C0))(this, loadoutSeq, unlockSeq);
	}
	template <typename T = void> T ResetDefault() {
		return ((T (*)(LoadoutItem*))(Il2CppBase() + 0x41EDF08))(this);
	}

};

}
