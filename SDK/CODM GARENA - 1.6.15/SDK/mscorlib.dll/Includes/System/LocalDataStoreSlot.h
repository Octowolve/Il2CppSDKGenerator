#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class LocalDataStoreSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "LocalDataStoreSlot"));
	}

	template <typename T = int32_t> T& slot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& thread_local() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& lock_obj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& slot_bitmap_thread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& slot_bitmap_context() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(LocalDataStoreSlot*))(Il2CppBase() + 0x400BBC0))(this);
	}

};

}
