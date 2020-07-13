#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ZoneNetWorkProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ZoneNetWorkProcessor"));
	}

	template <typename T = uintptr_t> static T& m_Serializer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_Sequence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& SEQUENCE_MIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SEQUENCE_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SEQUENCE_NTF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSequence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProtobufDataToBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProtobufBytesToData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessFailResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = int32_t> static T CreateSequence() {
		return ((T (*)(void *))(Il2CppBase() + 0x43AA80C))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ProtobufDataToBytes(uintptr_t bodyPkg, uint32_t sendCmd, uint64_t modeRouteId, uintptr_t* sequenceId) {
		return ((T (*)(void *, uintptr_t, uint32_t, uint64_t, uintptr_t*))(Il2CppBase() + 0x43AA9AC))(0, bodyPkg, sendCmd, modeRouteId, sequenceId);
	}
	template <typename T = uintptr_t> static T ProtobufBytesToData(Il2CppArray<uintptr_t>* content, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x43AB0E4))(0, content, length);
	}
	template <typename T = uintptr_t> static T ProcessFailResponse(int32_t recvCmd, int32_t sequenceId) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x43ABC9C))(0, recvCmd, sequenceId);
	}

};

}
