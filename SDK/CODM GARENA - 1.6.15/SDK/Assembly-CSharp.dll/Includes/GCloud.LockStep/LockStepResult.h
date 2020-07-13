#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class LockStepResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "LockStepResult"));
	}

	template <typename T = uintptr_t> T& Error() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Reason() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ExtCode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ExtCode2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T IsSuccess() {
		return ((T (*)(LockStepResult*))(Il2CppBase() + 0x46B0308))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(LockStepResult*, uintptr_t))(Il2CppBase() + 0x46B0B1C))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(LockStepResult*, uintptr_t))(Il2CppBase() + 0x46B0C4C))(this, reader);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LockStepResult*))(Il2CppBase() + 0x46B0D5C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(LockStepResult*))(Il2CppBase() + 0x46B1148))(this);
	}

};

}
