#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class IRemoteConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "IRemoteConfig"));
	}


	template <typename T = int32_t> T GetInt(Il2CppString* key, int32_t defaultValue) {
		return ((T (*)(IRemoteConfig*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, key, defaultValue);
	}
	template <typename T = int64_t> T GetLong(Il2CppString* key, int64_t defaultValue) {
		return ((T (*)(IRemoteConfig*, Il2CppString*, int64_t))(Il2CppBase() + 0x0))(this, key, defaultValue);
	}
	template <typename T = Il2CppString*> T GetString(Il2CppString* key, Il2CppString* defaultValue) {
		return ((T (*)(IRemoteConfig*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, key, defaultValue);
	}
	template <typename T = bool> T GetBool(Il2CppString* key, bool defaultValue) {
		return ((T (*)(IRemoteConfig*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, key, defaultValue);
	}
	template <typename T = double> T GetDouble(Il2CppString* key, double defaultValue) {
		return ((T (*)(IRemoteConfig*, Il2CppString*, double))(Il2CppBase() + 0x0))(this, key, defaultValue);
	}

};

}
