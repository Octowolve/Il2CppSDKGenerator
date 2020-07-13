#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class RelayData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "RelayData"));
	}

	template <typename T = int32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Flag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& DelayMS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& dataLength() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SequenceId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PeekData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayerOnline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(RelayData*))(Il2CppBase() + 0x46AB69C))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t dest) {
		return ((T (*)(RelayData*, uintptr_t))(Il2CppBase() + 0x46ABAC4))(this, dest);
	}
	template <typename T = int32_t> T PeekData(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(RelayData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46B2044))(this, buffer);
	}
	template <typename T = bool> T IsPlayerOnline() {
		return ((T (*)(RelayData*))(Il2CppBase() + 0x46B212C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(RelayData*, uintptr_t))(Il2CppBase() + 0x46B21D0))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(RelayData*, uintptr_t))(Il2CppBase() + 0x46B22F4))(this, reader);
	}

};

}
