#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKToolsFreeFlowInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKToolsFreeFlowInfo"));
	}

	template <typename T = Il2CppString*> T& ipAll() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ipConnect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& isFree() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ccType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_IPAll() {
		return ((T (*)(MSDKToolsFreeFlowInfo*))(Il2CppBase() + 0x46E02D4))(this);
	}
	template <typename T = void> T set_IPAll(Il2CppString* value) {
		return ((T (*)(MSDKToolsFreeFlowInfo*, Il2CppString*))(Il2CppBase() + 0x46E02DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_IPConnect() {
		return ((T (*)(MSDKToolsFreeFlowInfo*))(Il2CppBase() + 0x46E02E4))(this);
	}
	template <typename T = void> T set_IPConnect(Il2CppString* value) {
		return ((T (*)(MSDKToolsFreeFlowInfo*, Il2CppString*))(Il2CppBase() + 0x46E02EC))(this, value);
	}
	template <typename T = int32_t> T get_ISFree() {
		return ((T (*)(MSDKToolsFreeFlowInfo*))(Il2CppBase() + 0x46E02F4))(this);
	}
	template <typename T = void> T set_ISFree(int32_t value) {
		return ((T (*)(MSDKToolsFreeFlowInfo*, int32_t))(Il2CppBase() + 0x46E02FC))(this, value);
	}
	template <typename T = int32_t> T get_CCType() {
		return ((T (*)(MSDKToolsFreeFlowInfo*))(Il2CppBase() + 0x46E0304))(this);
	}
	template <typename T = void> T set_CCType(int32_t value) {
		return ((T (*)(MSDKToolsFreeFlowInfo*, int32_t))(Il2CppBase() + 0x46E030C))(this, value);
	}

};

}
