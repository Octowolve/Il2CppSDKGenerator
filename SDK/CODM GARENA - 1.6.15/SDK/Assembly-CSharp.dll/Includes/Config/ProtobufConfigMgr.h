#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ProtobufConfigMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ProtobufConfigMgr"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& SendProtobufDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& RecvProtobufDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& m_CSProtoAssembly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& m_CSProtoTypeDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCSProtoType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigBySendClassName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRecvTypeByRecvCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T GetCSProtoType(Il2CppString* typeName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3784E64))(0, typeName);
	}
	template <typename T = void> static T Cache() {
		return ((T (*)(void *))(Il2CppBase() + 0x37850EC))(0);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x37849EC))(0);
	}
	template <typename T = uintptr_t> static T GetConfigBySendClassName(Il2CppString* sendClassName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3785698))(0, sendClassName);
	}
	template <typename T = uintptr_t> static T GetRecvTypeByRecvCmd(int32_t recvCmd) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x37857F8))(0, recvCmd);
	}

};

}
