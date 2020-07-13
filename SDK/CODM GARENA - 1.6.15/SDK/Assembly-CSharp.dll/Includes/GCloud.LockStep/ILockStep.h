#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class ILockStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "ILockStep"));
	}


	template <typename T = bool> T Write(Il2CppArray<uintptr_t>* data, int32_t len, bool rawUdp, uintptr_t flag) {
		return ((T (*)(ILockStep*, Il2CppArray<uintptr_t>*, int32_t, bool, uintptr_t))(Il2CppBase() + 0x0))(this, data, len, rawUdp, flag);
	}
	template <typename T = bool> T ReadFrame(uintptr_t frame) {
		return ((T (*)(ILockStep*, uintptr_t))(Il2CppBase() + 0x0))(this, frame);
	}

};

}
