#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class IMidasPayService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "IMidasPayService"));
	}


	template <typename T = void> T SetProcess(Il2CppString* processName) {
		return ((T (*)(IMidasPayService*, Il2CppString*))(Il2CppBase() + 0x0))(this, processName);
	}
	template <typename T = void> T SetLogEnable(bool enable) {
		return ((T (*)(IMidasPayService*, bool))(Il2CppBase() + 0x0))(this, enable);
	}
	template <typename T = void> T Initialize(Il2CppString* idc, Il2CppString* env, Il2CppString* idcInfo, uintptr_t req, uintptr_t callback) {
		return ((T (*)(IMidasPayService*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, idc, env, idcInfo, req, callback);
	}
	template <typename T = void> T Pay(uintptr_t req, uintptr_t callback) {
		return ((T (*)(IMidasPayService*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, req, callback);
	}
	template <typename T = bool> T IsPayEnable() {
		return ((T (*)(IMidasPayService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T GetInfo(Il2CppString* reqType, uintptr_t req, uintptr_t callback) {
		return ((T (*)(IMidasPayService*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, reqType, req, callback);
	}
	template <typename T = void> T Reprovide(uintptr_t callback) {
		return ((T (*)(IMidasPayService*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = Il2CppString*> T GetMidasSDKVersion() {
		return ((T (*)(IMidasPayService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T LaunchWeb(uintptr_t req, uintptr_t callback) {
		return ((T (*)(IMidasPayService*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, req, callback);
	}
	template <typename T = void> T SetPath(Il2CppString* path) {
		return ((T (*)(IMidasPayService*, Il2CppString*))(Il2CppBase() + 0x0))(this, path);
	}
	template <typename T = void> T CouponsRollBack(Il2CppString* s) {
		return ((T (*)(IMidasPayService*, Il2CppString*))(Il2CppBase() + 0x0))(this, s);
	}
	template <typename T = void> T GetLocalPrice(Il2CppString* channel, Il2CppList<Il2CppString*>* productList, uintptr_t callback) {
		return ((T (*)(IMidasPayService*, Il2CppString*, Il2CppList<Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x0))(this, channel, productList, callback);
	}
	template <typename T = void> T GetIntroPrice(Il2CppString* channel, Il2CppList<Il2CppString*>* productList, uintptr_t callback) {
		return ((T (*)(IMidasPayService*, Il2CppString*, Il2CppList<Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x0))(this, channel, productList, callback);
	}
	template <typename T = void> T GetGarenaProductInfo(uintptr_t request, uintptr_t callback) {
		return ((T (*)(IMidasPayService*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, request, callback);
	}
	template <typename T = void> T ScanGoogleInventory(int32_t serverId, int32_t roleId, uintptr_t callback) {
		return ((T (*)(IMidasPayService*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, serverId, roleId, callback);
	}

};

}
