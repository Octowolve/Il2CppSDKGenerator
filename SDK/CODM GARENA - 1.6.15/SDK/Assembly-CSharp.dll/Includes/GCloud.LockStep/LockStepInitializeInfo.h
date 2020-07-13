#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class LockStepInitializeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "LockStepInitializeInfo"));
	}

	template <typename T = int32_t> T& MaxBufferSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& StartFrameId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ManualUpdateOption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsTcpCritical() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MaxHistorySize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(LockStepInitializeInfo*, uintptr_t))(Il2CppBase() + 0x46B08E8))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(LockStepInitializeInfo*, uintptr_t))(Il2CppBase() + 0x46B09F0))(this, reader);
	}

};

}
