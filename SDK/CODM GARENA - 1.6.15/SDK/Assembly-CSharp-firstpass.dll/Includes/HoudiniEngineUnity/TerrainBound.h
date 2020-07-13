#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class TerrainBound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "TerrainBound"));
	}

	template <typename T = Il2CppVector3> T& min() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& extent() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T In(Il2CppVector3 position) {
		return ((T (*)(TerrainBound*, Il2CppVector3))(Il2CppBase() + 0x2BF5F98))(this, position);
	}

};

}
