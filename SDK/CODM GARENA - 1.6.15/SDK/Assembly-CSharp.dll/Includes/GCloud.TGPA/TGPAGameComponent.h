#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.TGPA {

class TGPAGameComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.TGPA", "TGPAGameComponent"));
	}

	template <typename T = uintptr_t> T& tgpaCallback() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TGPAGameComponent*))(Il2CppBase() + 0x443D3E8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TGPAGameComponent*))(Il2CppBase() + 0x443D3EC))(this);
	}
	template <typename T = void> T setGameCallback(uintptr_t callback) {
		return ((T (*)(TGPAGameComponent*, uintptr_t))(Il2CppBase() + 0x443D3F0))(this, callback);
	}
	template <typename T = void> T notifySystemInfo(Il2CppString* json) {
		return ((T (*)(TGPAGameComponent*, Il2CppString*))(Il2CppBase() + 0x443D3F8))(this, json);
	}

};

}
