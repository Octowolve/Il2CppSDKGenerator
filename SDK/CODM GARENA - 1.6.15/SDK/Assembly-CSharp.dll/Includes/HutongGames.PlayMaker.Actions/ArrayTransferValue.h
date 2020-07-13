#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ArrayTransferValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ArrayTransferValue"));
	}

	template <typename T = uintptr_t> T& arraySource() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& arrayTarget() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& indexToTransfer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& copyType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& pasteType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& indexOutOfRange() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ArrayTransferValue*))(Il2CppBase() + 0x4F31A3C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ArrayTransferValue*))(Il2CppBase() + 0x4F31B24))(this);
	}
	template <typename T = void> T DoTransferValue() {
		return ((T (*)(ArrayTransferValue*))(Il2CppBase() + 0x4F31B44))(this);
	}

};

}
