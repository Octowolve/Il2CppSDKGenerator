#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class CompoundArrayAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "CompoundArrayAttribute"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& firstArrayName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& secondArrayName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CompoundArrayAttribute*))(Il2CppBase() + 0x2EEBCE4))(this);
	}
	template <typename T = Il2CppString*> T get_FirstArrayName() {
		return ((T (*)(CompoundArrayAttribute*))(Il2CppBase() + 0x2EEBCEC))(this);
	}
	template <typename T = Il2CppString*> T get_SecondArrayName() {
		return ((T (*)(CompoundArrayAttribute*))(Il2CppBase() + 0x2EEBCF4))(this);
	}

};

}
