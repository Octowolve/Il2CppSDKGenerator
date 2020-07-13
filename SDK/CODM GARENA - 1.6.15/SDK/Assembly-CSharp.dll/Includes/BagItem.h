#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BagItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BagItem"));
	}

	template <typename T = uintptr_t> T& LabelNum() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& SpriteLock() {
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

	template <typename T = void> T SetState(int32_t bagIndex, int32_t unlockIndex) {
		return ((T (*)(BagItem*, int32_t, int32_t))(Il2CppBase() + 0x41ED324))(this, bagIndex, unlockIndex);
	}
	template <typename T = void> T ResetDefault() {
		return ((T (*)(BagItem*))(Il2CppBase() + 0x41EDCD0))(this);
	}

};

}
