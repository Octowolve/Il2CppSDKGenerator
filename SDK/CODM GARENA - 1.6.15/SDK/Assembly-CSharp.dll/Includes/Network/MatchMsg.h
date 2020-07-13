#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class MatchMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "MatchMsg"));
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
	template <typename T = int32_t> T& Sequence() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Protocol() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& OnReplaceID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEventType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseInDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnserializeMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushProtocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckReplayID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CheckReplayID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uint32_t> T get_UIN() {
		return ((T (*)(MatchMsg*))(Il2CppBase() + 0x483057C))(this);
	}
	template <typename T = void> T set_UIN(uint32_t value) {
		return ((T (*)(MatchMsg*, uint32_t))(Il2CppBase() + 0x48239DC))(this, value);
	}
	template <typename T = uint32_t> T get_CommandID() {
		return ((T (*)(MatchMsg*))(Il2CppBase() + 0x4830584))(this);
	}
	template <typename T = void> T set_CommandID(uint32_t value) {
		return ((T (*)(MatchMsg*, uint32_t))(Il2CppBase() + 0x483056C))(this, value);
	}
	template <typename T = uintptr_t> T get_MsgType() {
		return ((T (*)(MatchMsg*))(Il2CppBase() + 0x483058C))(this);
	}
	template <typename T = void> T set_MsgType(uintptr_t value) {
		return ((T (*)(MatchMsg*, uintptr_t))(Il2CppBase() + 0x4830574))(this, value);
	}
	template <typename T = uintptr_t> T get_Protocol() {
		return ((T (*)(MatchMsg*))(Il2CppBase() + 0x48239D4))(this);
	}
	template <typename T = void> T ChangeEventType(uintptr_t msgType) {
		return ((T (*)(MatchMsg*, uintptr_t))(Il2CppBase() + 0x4830594))(this, msgType);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MatchMsg*))(Il2CppBase() + 0x483063C))(this);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(MatchMsg*))(Il2CppBase() + 0x4830928))(this);
	}
	template <typename T = bool> T UseInDeadReplay() {
		return ((T (*)(MatchMsg*))(Il2CppBase() + 0x4823B18))(this);
	}
	template <typename T = int32_t> T UnserializeMsg(Il2CppArray<uintptr_t>* data, int32_t dataIndex, int32_t dataCount, int32_t sequence) {
		return ((T (*)(MatchMsg*, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x48236DC))(this, data, dataIndex, dataCount, sequence);
	}
	template <typename T = void> T PushProtocol() {
		return ((T (*)(MatchMsg*))(Il2CppBase() + 0x48239E4))(this);
	}
	template <typename T = void> static T CheckReplayID(uintptr_t val) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x483123C))(0, val);
	}
	template <typename T = void> static T CheckReplayID_1(uintptr_t val) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48313A0))(0, val);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(MatchMsg*))(Il2CppBase() + 0x4831478))(this);
	}

};

}
