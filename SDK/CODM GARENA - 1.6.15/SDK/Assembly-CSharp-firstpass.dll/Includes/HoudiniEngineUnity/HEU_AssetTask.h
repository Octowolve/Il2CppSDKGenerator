#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUAssetTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_AssetTask"));
	}

	template <typename T = uintptr_t> T& _buildType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _asset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _assetPath() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& _position() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _buildResult() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int64_t> T& _forceSessionID() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uintptr_t> T GetTaskSession() {
		return ((T (*)(HEUAssetTask*))(Il2CppBase() + 0x4C64650))(this);
	}
	template <typename T = void> T DoTask() {
		return ((T (*)(HEUAssetTask*))(Il2CppBase() + 0x4C647C4))(this);
	}
	template <typename T = void> T KillTask() {
		return ((T (*)(HEUAssetTask*))(Il2CppBase() + 0x4C64D28))(this);
	}
	template <typename T = void> T CompleteTask(uintptr_t result) {
		return ((T (*)(HEUAssetTask*, uintptr_t))(Il2CppBase() + 0x4C64F0C))(this, result);
	}
	template <typename T = void> T CookCompletedCallback(uintptr_t asset, bool bSuccess, Il2CppList<uintptr_t>* outputs) {
		return ((T (*)(HEUAssetTask*, uintptr_t, bool, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C650F0))(this, asset, bSuccess, outputs);
	}

};

}
