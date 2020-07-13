#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_Task"));
	}

	template <typename T = uintptr_t> T& _status() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _result() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _taskCompletedDelegate() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_TaskGuid() {
		return ((T (*)(HEUTask*))(Il2CppBase() + 0x2BF0D6C))(this);
	}
	template <typename T = void> T DoTask() {
		return ((T (*)(HEUTask*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UpdateTask() {
		return ((T (*)(HEUTask*))(Il2CppBase() + 0x2BF0D7C))(this);
	}
	template <typename T = void> T KillTask() {
		return ((T (*)(HEUTask*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T CompleteTask(uintptr_t result) {
		return ((T (*)(HEUTask*, uintptr_t))(Il2CppBase() + 0x0))(this, result);
	}

};

}
