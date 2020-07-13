#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Serialization {

class FormerlySerializedAsAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Serialization", "FormerlySerializedAsAttribute"));
	}

	template <typename T = Il2CppString*> T& m_oldName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_oldName() {
		return ((T (*)(FormerlySerializedAsAttribute*))(Il2CppBase() + 0x4E806B8))(this);
	}

};

}
