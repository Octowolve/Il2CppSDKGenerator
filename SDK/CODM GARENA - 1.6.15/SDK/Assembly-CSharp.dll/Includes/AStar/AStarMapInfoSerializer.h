#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AStar {

class AStarMapInfoSerializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AStar", "AStarMapInfoSerializer"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T Serialize(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22D5C68))(0, info);
	}
	template <typename T = uintptr_t> static T Deserialize(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x22D6058))(0, data);
	}

};

}
