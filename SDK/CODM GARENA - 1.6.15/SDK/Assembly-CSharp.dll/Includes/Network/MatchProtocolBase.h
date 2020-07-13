#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class MatchProtocolBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "MatchProtocolBase"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& m_SerializeBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> T& protocolCmd() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSerializeBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnSerialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T GetSerializeBuffer() {
		return ((T (*)(void *))(Il2CppBase() + 0x48316C4))(0);
	}
	template <typename T = int32_t> T Serialize(Il2CppArray<uintptr_t>* context) {
		return ((T (*)(MatchProtocolBase*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4829948))(this, context);
	}
	template <typename T = int32_t> T UnSerialize(Il2CppArray<uintptr_t>* bytes, int32_t position, int32_t count) {
		return ((T (*)(MatchProtocolBase*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x48309C0))(this, bytes, position, count);
	}
	template <typename T = void> T Serialize_1(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MatchProtocolBase*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x48317C4))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MatchProtocolBase*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4831954))(this, bytes, position);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(MatchProtocolBase*))(Il2CppBase() + 0x4831AE4))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(MatchProtocolBase*, bool))(Il2CppBase() + 0x4831AEC))(this, value);
	}

};

}
