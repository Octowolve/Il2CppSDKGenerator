#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BaseEventMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BaseEventMsg"));
	}

	template <typename T = uint32_t> T& UIN() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& CommandID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& MsgType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Params() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& Broadcast() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEventMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetEventMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uint32_t> T get_UIN() {
		return ((T (*)(BaseEventMsg*))(Il2CppBase() + 0x360CA58))(this);
	}
	template <typename T = void> T set_UIN(uint32_t value) {
		return ((T (*)(BaseEventMsg*, uint32_t))(Il2CppBase() + 0x360CA60))(this, value);
	}
	template <typename T = uint32_t> T get_CommandID() {
		return ((T (*)(BaseEventMsg*))(Il2CppBase() + 0x360CA68))(this);
	}
	template <typename T = void> T set_CommandID(uint32_t value) {
		return ((T (*)(BaseEventMsg*, uint32_t))(Il2CppBase() + 0x360CA70))(this, value);
	}
	template <typename T = uintptr_t> T get_MsgType() {
		return ((T (*)(BaseEventMsg*))(Il2CppBase() + 0x360CA78))(this);
	}
	template <typename T = void> T set_MsgType(uintptr_t value) {
		return ((T (*)(BaseEventMsg*, uintptr_t))(Il2CppBase() + 0x360CA80))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Params() {
		return ((T (*)(BaseEventMsg*))(Il2CppBase() + 0x360CA88))(this);
	}
	template <typename T = void> T set_Params(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BaseEventMsg*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x360CA90))(this, value);
	}
	template <typename T = int32_t> T get_ParamLength() {
		return ((T (*)(BaseEventMsg*))(Il2CppBase() + 0x360CA98))(this);
	}
	template <typename T = void> T SetEventMsg(uint32_t inCommandID, uintptr_t inMsgType, bool broadcast, Il2CppArray<uintptr_t>* InParams) {
		return ((T (*)(BaseEventMsg*, uint32_t, uintptr_t, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x360CAAC))(this, inCommandID, inMsgType, broadcast, InParams);
	}
	template <typename T = void> T SetEventMsg_1(uint32_t inUIN, uint32_t inCommandID, Il2CppArray<uintptr_t>* InParams) {
		return ((T (*)(BaseEventMsg*, uint32_t, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x360CBDC))(this, inUIN, inCommandID, InParams);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(BaseEventMsg*))(Il2CppBase() + 0x360CCBC))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(BaseEventMsg*, bool))(Il2CppBase() + 0x360CCC4))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(BaseEventMsg*))(Il2CppBase() + 0x360CCCC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BaseEventMsg*))(Il2CppBase() + 0x360CD70))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(BaseEventMsg*))(Il2CppBase() + 0x360CEE8))(this);
	}

};

}
