#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmEventData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmEventData"));
	}

	template <typename T = uintptr_t> T& SentByFsm() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& SentByState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SentByAction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& BoolData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& IntData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& FloatData() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& Vector2Data() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& Vector3Data() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& StringData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppQuaternion> T& QuaternionData() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppRect> T& RectData() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ColorData() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ObjectData() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& GameObjectData() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& MaterialData() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& TextureData() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& Player() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& DisconnectionInfo() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ConnectionError() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NetworkMessageInfo() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& MasterServerEvent() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T DebugLog() {
		return ((T (*)(FsmEventData*))(Il2CppBase() + 0x2F0BCB4))(this);
	}

};

}
