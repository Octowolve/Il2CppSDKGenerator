#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.VBSS {

class IVBSSController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.VBSS", "IVBSSController"));
	}


	template <typename T = void> T Init(int32_t iMaxPlayer) {
		return ((T (*)(IVBSSController*, int32_t))(Il2CppBase() + 0x0))(this, iMaxPlayer);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(IVBSSController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Term() {
		return ((T (*)(IVBSSController*))(Il2CppBase() + 0x0))(this);
	}

};

}
