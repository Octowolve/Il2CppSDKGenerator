#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class ObjectTypeAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "ObjectTypeAttribute"));
	}

	template <typename T = uintptr_t> T& objectType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(ObjectTypeAttribute*))(Il2CppBase() + 0x2EE05A4))(this);
	}

};

}
