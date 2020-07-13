#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class IBufferStrategy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "IBufferStrategy"));
	}


	template <typename T = bool> T OnInput(Il2CppArray<uintptr_t>* data, int32_t len, bool rawUdp, uintptr_t flag) {
		return ((T (*)(IBufferStrategy*, Il2CppArray<uintptr_t>*, int32_t, bool, uintptr_t))(Il2CppBase() + 0x0))(this, data, len, rawUdp, flag);
	}
	template <typename T = uintptr_t> T OnPopFrame() {
		return ((T (*)(IBufferStrategy*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IBufferStrategy*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Steper() {
		return ((T (*)(IBufferStrategy*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Steper(uintptr_t value) {
		return ((T (*)(IBufferStrategy*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
