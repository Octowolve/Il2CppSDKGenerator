#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class ArraySegment1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "ArraySegment`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& array() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& offset() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Array() {
		return ((T (*)(ArraySegment1*))(Il2CppBase() + 0x4DBDD7C))(this);
	}
	template <typename T = int32_t> T get_Offset() {
		return ((T (*)(ArraySegment1*))(Il2CppBase() + 0x4DBDD84))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ArraySegment1*))(Il2CppBase() + 0x4DBDD8C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(ArraySegment1*, uintptr_t))(Il2CppBase() + 0x4DBDEB0))(this, obj);
	}
	template <typename T = bool> T Equals_1(void* obj) {
		return ((T (*)(ArraySegment1*, void*))(Il2CppBase() + 0x4DBDEB8))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArraySegment1*))(Il2CppBase() + 0x4DBDF04))(this);
	}

};

}
