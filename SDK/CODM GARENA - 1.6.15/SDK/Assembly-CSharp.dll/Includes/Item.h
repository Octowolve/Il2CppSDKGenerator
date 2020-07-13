#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Item
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Item"));
	}

	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& min() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& max() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& l() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& r() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& isRight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeOne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T TakeOne() {
		return ((T (*)(Item*))(Il2CppBase() + 0x35758C8))(this);
	}

};

}
