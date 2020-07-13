#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OrderedLinkedListNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OrderedLinkedListNode"));
	}

	template <typename T = void*> T& Previous() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& Next() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(OrderedLinkedListNode*))(Il2CppBase() + 0x472067C))(this);
	}

};

}
