#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GameCommunicationLineMsgConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GameCommunicationLineMsgConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& ChatContext() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& TipContext() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& PromptAudioMale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& PromptAudioFemale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& AudioLength() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& ShowType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(GameCommunicationLineMsgConfig*))(Il2CppBase() + 0x4645F6C))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(GameCommunicationLineMsgConfig*))(Il2CppBase() + 0x464600C))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(GameCommunicationLineMsgConfig*, int32_t))(Il2CppBase() + 0x4646014))(this, value);
	}
	template <typename T = Il2CppString*> T get_ChatContext() {
		return ((T (*)(GameCommunicationLineMsgConfig*))(Il2CppBase() + 0x464601C))(this);
	}
	template <typename T = void> T set_ChatContext(Il2CppString* value) {
		return ((T (*)(GameCommunicationLineMsgConfig*, Il2CppString*))(Il2CppBase() + 0x4646024))(this, value);
	}
	template <typename T = Il2CppString*> T get_TipContext() {
		return ((T (*)(GameCommunicationLineMsgConfig*))(Il2CppBase() + 0x464602C))(this);
	}
	template <typename T = void> T set_TipContext(Il2CppString* value) {
		return ((T (*)(GameCommunicationLineMsgConfig*, Il2CppString*))(Il2CppBase() + 0x4646034))(this, value);
	}
	template <typename T = Il2CppString*> T get_PromptAudioMale() {
		return ((T (*)(GameCommunicationLineMsgConfig*))(Il2CppBase() + 0x464603C))(this);
	}
	template <typename T = void> T set_PromptAudioMale(Il2CppString* value) {
		return ((T (*)(GameCommunicationLineMsgConfig*, Il2CppString*))(Il2CppBase() + 0x4646044))(this, value);
	}
	template <typename T = Il2CppString*> T get_PromptAudioFemale() {
		return ((T (*)(GameCommunicationLineMsgConfig*))(Il2CppBase() + 0x464604C))(this);
	}
	template <typename T = void> T set_PromptAudioFemale(Il2CppString* value) {
		return ((T (*)(GameCommunicationLineMsgConfig*, Il2CppString*))(Il2CppBase() + 0x4646054))(this, value);
	}
	template <typename T = int32_t> T get_AudioLength() {
		return ((T (*)(GameCommunicationLineMsgConfig*))(Il2CppBase() + 0x464605C))(this);
	}
	template <typename T = void> T set_AudioLength(int32_t value) {
		return ((T (*)(GameCommunicationLineMsgConfig*, int32_t))(Il2CppBase() + 0x4646064))(this, value);
	}
	template <typename T = int32_t> T get_ShowType() {
		return ((T (*)(GameCommunicationLineMsgConfig*))(Il2CppBase() + 0x464606C))(this);
	}
	template <typename T = void> T set_ShowType(int32_t value) {
		return ((T (*)(GameCommunicationLineMsgConfig*, int32_t))(Il2CppBase() + 0x4646074))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GameCommunicationLineMsgConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x464607C))(this, bytes, position);
	}

};

}
