#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class PositionAsUV1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "PositionAsUV1"));
	}


	template <typename T = void> T ModifyMesh(uintptr_t vh) {
		return ((T (*)(PositionAsUV1*, uintptr_t))(Il2CppBase() + 0x4E29710))(this, vh);
	}

};

}
