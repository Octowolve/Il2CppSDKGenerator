#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Tuple2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Tuple`2"));
	}

	template <typename T = uintptr_t> T& First() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Second() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Equality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Inequality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Tuple2*, uintptr_t))(Il2CppBase() + 0x48E00E4))(this, other);
	}
	template <typename T = bool> static T Equals_1(void* a, void* b) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x48E030C))(0, a, b);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t other) {
		return ((T (*)(Tuple2*, uintptr_t))(Il2CppBase() + 0x48E0530))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Tuple2*))(Il2CppBase() + 0x48E082C))(this);
	}
	template <typename T = bool> static T op_Equality(void* a, void* b) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x48E09D0))(0, a, b);
	}
	template <typename T = bool> static T op_Inequality(void* a, void* b) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x48E0B54))(0, a, b);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Tuple2*))(Il2CppBase() + 0x48E0CDC))(this);
	}

};

}