#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSoundEngine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSoundEngine"));
	}

	template <typename T = int32_t> static T& AK_SIMD_ALIGNMENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_BUFFER_ALIGNMENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MAX_PATH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_BANK_PLATFORM_DATA_ALIGNMENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_INVALID_PLUGINID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> static T& AK_INVALID_GAME_OBJECT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_INVALID_UNIQUE_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_INVALID_RTPC_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_INVALID_LISTENER_INDEX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_INVALID_PLAYING_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_DEFAULT_SWITCH_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_INVALID_POOL_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_DEFAULT_POOL_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_INVALID_AUX_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_INVALID_FILE_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_INVALID_DEVICE_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_INVALID_BANK_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_FALLBACK_ARGUMENTVALUE_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_INVALID_CHANNELMASK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_INVALID_OUTPUT_DEVICE_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_MIXER_FX_SLOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> static T& AK_DEFAULT_LISTENER_OBJ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_DEFAULT_PRIORITY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_MIN_PRIORITY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_MAX_PRIORITY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_DEFAULT_BANK_IO_PRIORITY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& AK_DEFAULT_BANK_THROUGHPUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AKCOMPANYID_AUDIOKINETIC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& AK_LISTENERS_MASK_ALL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NULL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCURVEINTERPOLATION_NUM_STORAGE_BIT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MAX_LANGUAGE_NAME_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_AUDIOKINETIC_EXTERNAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_MCDSP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_WAVEARTS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_PHONETICARTS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_IZOTOPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_GENAUDIO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_CRANKCASEAUDIO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_IOSONO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_AUROTECHNOLOGIES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_DOLBY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_TWOBIGEARS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_OCULUS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_BLUERIPPLESOUND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_ENZIEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_KROTOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_NURULIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_SUPERPOWERED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_GOOGLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCOMPANYID_VISISONICS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_BANK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_PCM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_ADPCM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_XMA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_VORBIS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_WIIADPCM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_PCMEX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_EXTERNAL_SOURCE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_XWMA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_AAC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_FILE_PACKAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_ATRAC9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_VAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_PROFILERCAPTURE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_ANALYSISFILE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_MIDI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_OPUS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AKCODECID_CAF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_WAVE_FORMAT_VAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_WAVE_FORMAT_AT9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_WAVE_FORMAT_VORBIS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_WAVE_FORMAT_AAC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_WAVE_FORMAT_OPUS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WAVE_FORMAT_XMA2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PANNER_NUM_STORAGE_BITS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& POSSOURCE_NUM_STORAGE_BITS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MAX_BITS_METERING_FLAGS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_OS_STRUCT_ALIGN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_64B_OS_STRUCT_ALIGN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& AK_ASYNC_OPEN_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_COMM_DEFAULT_DISCOVERY_PORT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_EVENT_TYPE_INVALID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_EVENT_TYPE_NOTE_OFF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_EVENT_TYPE_NOTE_ON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_EVENT_TYPE_NOTE_AFTERTOUCH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_EVENT_TYPE_CONTROLLER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_EVENT_TYPE_PROGRAM_CHANGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_EVENT_TYPE_CHANNEL_AFTERTOUCH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_EVENT_TYPE_PITCH_BEND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_EVENT_TYPE_SYSEX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_EVENT_TYPE_ESCAPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_EVENT_TYPE_META() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_BANK_SELECT_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_MOD_WHEEL_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_BREATH_CTRL_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_3_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_FOOT_PEDAL_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_PORTAMENTO_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_DATA_ENTRY_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_VOLUME_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_BALANCE_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_9_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_PAN_POSITION_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_EXPRESSION_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_EFFECT_CTRL_1_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_EFFECT_CTRL_2_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_14_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_15_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_GEN_SLIDER_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_GEN_SLIDER_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_GEN_SLIDER_3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_GEN_SLIDER_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_20_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_21_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_22_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_23_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_24_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_25_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_26_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_27_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_28_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_29_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_30_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_31_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_BANK_SELECT_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_MOD_WHEEL_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_BREATH_CTRL_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_3_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_FOOT_PEDAL_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_PORTAMENTO_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_DATA_ENTRY_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_VOLUME_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_BALANCE_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_9_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_PAN_POSITION_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_EXPRESSION_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_EFFECT_CTRL_1_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_EFFECT_CTRL_2_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_14_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_15_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_20_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_21_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_22_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_23_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_24_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_25_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_26_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_27_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_28_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_29_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_30_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CTRL_31_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_HOLD_PEDAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_PORTAMENTO_ON_OFF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_SUSTENUTO_PEDAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_SOFT_PEDAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_LEGATO_PEDAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_HOLD_PEDAL_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_SOUND_VARIATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_SOUND_TIMBRE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_SOUND_RELEASE_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_SOUND_ATTACK_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_SOUND_BRIGHTNESS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_SOUND_CTRL_6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_SOUND_CTRL_7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_SOUND_CTRL_8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_SOUND_CTRL_9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_SOUND_CTRL_10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_GENERAL_BUTTON_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_GENERAL_BUTTON_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_GENERAL_BUTTON_3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_GENERAL_BUTTON_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_REVERB_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_TREMOLO_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CHORUS_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_CELESTE_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_PHASER_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_DATA_BUTTON_P1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_DATA_BUTTON_M1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_NON_REGISTER_COARSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_NON_REGISTER_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_ALL_SOUND_OFF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_ALL_CONTROLLERS_OFF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_LOCAL_KEYBOARD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_ALL_NOTES_OFF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_OMNI_MODE_OFF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_OMNI_MODE_ON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_OMNI_MONOPHONIC_ON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MIDI_CC_OMNI_POLYPHONIC_ON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_FRONT_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_FRONT_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_FRONT_CENTER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_LOW_FREQUENCY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_BACK_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_BACK_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_BACK_CENTER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SIDE_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SIDE_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_TOP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_HEIGHT_FRONT_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_HEIGHT_FRONT_CENTER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_HEIGHT_FRONT_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_HEIGHT_BACK_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_HEIGHT_BACK_CENTER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_HEIGHT_BACK_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_MONO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_0POINT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_1POINT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_STEREO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_2POINT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_3STEREO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_3POINT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_4POINT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_5POINT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_6POINT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_7POINT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_SURROUND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_DPL2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_HEIGHT_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_HEIGHT_5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_HEIGHT_ALL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_AURO_222() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_AURO_8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_AURO_9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_AURO_9POINT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_AURO_10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_AURO_10POINT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_AURO_11() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_AURO_11POINT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_AURO_11_740() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_AURO_11POINT1_740() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_AURO_13_751() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_AURO_13POINT1_751() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_DOLBY_5_0_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_DOLBY_5_1_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_DOLBY_6_0_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_DOLBY_6_1_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_DOLBY_6_0_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_DOLBY_6_1_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_DOLBY_7_0_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_DOLBY_7_1_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_DOLBY_7_0_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_DOLBY_7_1_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_ALL_SPEAKERS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_FRONT_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_FRONT_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_CENTER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_NOCENTER_BACK_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_NOCENTER_BACK_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_NOCENTER_SIDE_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_NOCENTER_SIDE_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_WITHCENTER_BACK_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_WITHCENTER_BACK_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_WITHCENTER_SIDE_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_WITHCENTER_SIDE_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_0_LFE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_1_CENTER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_1_LFE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_2_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_2_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_2_LFE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_3_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_3_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_3_CENTER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_3_LFE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_4_FRONTLEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_4_FRONTRIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_4_REARLEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_4_REARRIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_4_LFE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_5_FRONTLEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_5_FRONTRIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_5_CENTER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_5_REARLEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_5_REARRIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_5_LFE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_6_FRONTLEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_6_FRONTRIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_6_REARLEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_6_REARRIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_6_SIDELEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_6_SIDERIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_6_LFE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_7_FRONTLEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_7_FRONTRIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_7_CENTER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_7_REARLEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_7_REARRIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_7_SIDELEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_7_SIDERIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_IDX_SETUP_7_LFE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_0_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_1_0_CENTER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_1_1_CENTER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_2_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_2_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_3_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_3_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_FRONT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_4_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_4_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_5_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_5_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_6_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_6_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_7_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_7_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SPEAKER_SETUP_DEFAULT_PLANE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_SUPPORTED_STANDARD_CHANNEL_MASK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_STANDARD_MAX_NUM_CHANNELS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MAX_NUM_TEXTURE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MAX_REFLECT_ORDER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AK_MAX_SOUND_PROPAGATION_DEPTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& AK_DEFAULT_DIFFR_SHADOW_DEGREES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& AK_DEFAULT_DIFFR_SHADOW_ATTEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& gameObjectHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint32_t> static T get_AK_SOUNDBANK_VERSION() {
		return ((T (*)(void *))(Il2CppBase() + 0x2255900))(0);
	}
	template <typename T = uint16_t> static T get_AK_INT() {
		return ((T (*)(void *))(Il2CppBase() + 0x2255A68))(0);
	}
	template <typename T = uint16_t> static T get_AK_FLOAT() {
		return ((T (*)(void *))(Il2CppBase() + 0x2255BD0))(0);
	}
	template <typename T = unsigned char> static T get_AK_INTERLEAVED() {
		return ((T (*)(void *))(Il2CppBase() + 0x2255D38))(0);
	}
	template <typename T = unsigned char> static T get_AK_NONINTERLEAVED() {
		return ((T (*)(void *))(Il2CppBase() + 0x2255EA0))(0);
	}
	template <typename T = uint32_t> static T get_AK_LE_NATIVE_BITSPERSAMPLE() {
		return ((T (*)(void *))(Il2CppBase() + 0x2256008))(0);
	}
	template <typename T = uint32_t> static T get_AK_LE_NATIVE_SAMPLETYPE() {
		return ((T (*)(void *))(Il2CppBase() + 0x2256170))(0);
	}
	template <typename T = uint32_t> static T get_AK_LE_NATIVE_INTERLEAVE() {
		return ((T (*)(void *))(Il2CppBase() + 0x22562D8))(0);
	}
	template <typename T = uint32_t> static T DynamicSequenceOpen(uintptr_t in_gameObjectID, uint32_t in_uFlags, uintptr_t in_pfnCallback, uintptr_t in_pCookie, uintptr_t in_eDynamicSequenceType) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2256440))(0, in_gameObjectID, in_uFlags, in_pfnCallback, in_pCookie, in_eDynamicSequenceType);
	}
	template <typename T = uint32_t> static T DynamicSequenceOpen_1(uintptr_t in_gameObjectID, uint32_t in_uFlags, uintptr_t in_pfnCallback, uintptr_t in_pCookie) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x225682C))(0, in_gameObjectID, in_uFlags, in_pfnCallback, in_pCookie);
	}
	template <typename T = uint32_t> static T DynamicSequenceOpen_2(uintptr_t in_gameObjectID, uint32_t in_uFlags) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2256B34))(0, in_gameObjectID, in_uFlags);
	}
	template <typename T = uint32_t> static T DynamicSequenceOpen_3(uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2256D6C))(0, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T DynamicSequenceClose(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2256F98))(0, in_playingID);
	}
	template <typename T = uintptr_t> static T DynamicSequencePlay(uint32_t in_playingID, int32_t in_uTransitionDuration, uintptr_t in_eFadeCurve) {
		return ((T (*)(void *, uint32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2257118))(0, in_playingID, in_uTransitionDuration, in_eFadeCurve);
	}
	template <typename T = uintptr_t> static T DynamicSequencePlay_1(uint32_t in_playingID, int32_t in_uTransitionDuration) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x22572C0))(0, in_playingID, in_uTransitionDuration);
	}
	template <typename T = uintptr_t> static T DynamicSequencePlay_2(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2257450))(0, in_playingID);
	}
	template <typename T = uintptr_t> static T DynamicSequencePause(uint32_t in_playingID, int32_t in_uTransitionDuration, uintptr_t in_eFadeCurve) {
		return ((T (*)(void *, uint32_t, int32_t, uintptr_t))(Il2CppBase() + 0x22575D0))(0, in_playingID, in_uTransitionDuration, in_eFadeCurve);
	}
	template <typename T = uintptr_t> static T DynamicSequencePause_1(uint32_t in_playingID, int32_t in_uTransitionDuration) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x2257778))(0, in_playingID, in_uTransitionDuration);
	}
	template <typename T = uintptr_t> static T DynamicSequencePause_2(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2257908))(0, in_playingID);
	}
	template <typename T = uintptr_t> static T DynamicSequenceResume(uint32_t in_playingID, int32_t in_uTransitionDuration, uintptr_t in_eFadeCurve) {
		return ((T (*)(void *, uint32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2257A88))(0, in_playingID, in_uTransitionDuration, in_eFadeCurve);
	}
	template <typename T = uintptr_t> static T DynamicSequenceResume_1(uint32_t in_playingID, int32_t in_uTransitionDuration) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x2257C30))(0, in_playingID, in_uTransitionDuration);
	}
	template <typename T = uintptr_t> static T DynamicSequenceResume_2(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2257DC0))(0, in_playingID);
	}
	template <typename T = uintptr_t> static T DynamicSequenceStop(uint32_t in_playingID, int32_t in_uTransitionDuration, uintptr_t in_eFadeCurve) {
		return ((T (*)(void *, uint32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2257F40))(0, in_playingID, in_uTransitionDuration, in_eFadeCurve);
	}
	template <typename T = uintptr_t> static T DynamicSequenceStop_1(uint32_t in_playingID, int32_t in_uTransitionDuration) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x22580E8))(0, in_playingID, in_uTransitionDuration);
	}
	template <typename T = uintptr_t> static T DynamicSequenceStop_2(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2258278))(0, in_playingID);
	}
	template <typename T = uintptr_t> static T DynamicSequenceBreak(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x22583F8))(0, in_playingID);
	}
	template <typename T = uintptr_t> static T DynamicSequenceGetPauseTimes(uint32_t in_playingID, uintptr_t* out_uTime, uintptr_t* out_uDuration) {
		return ((T (*)(void *, uint32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2258578))(0, in_playingID, out_uTime, out_uDuration);
	}
	template <typename T = uintptr_t> static T DynamicSequenceLockPlaylist(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x225873C))(0, in_playingID);
	}
	template <typename T = uintptr_t> static T DynamicSequenceUnlockPlaylist(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2258938))(0, in_playingID);
	}
	template <typename T = bool> static T IsInitialized() {
		return ((T (*)(void *))(Il2CppBase() + 0x2258AB8))(0);
	}
	template <typename T = uintptr_t> static T GetAudioSettings(uintptr_t out_audioSettings) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2258C28))(0, out_audioSettings);
	}
	template <typename T = uintptr_t> static T GetSpeakerConfiguration(uint64_t in_idOutput) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2258DBC))(0, in_idOutput);
	}
	template <typename T = uintptr_t> static T GetSpeakerConfiguration_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x2258F90))(0);
	}
	template <typename T = uintptr_t> static T GetPanningRule(uintptr_t* out_ePanningRule, uint64_t in_idOutput) {
		return ((T (*)(void *, uintptr_t*, uint64_t))(Il2CppBase() + 0x2259134))(0, out_ePanningRule, in_idOutput);
	}
	template <typename T = uintptr_t> static T GetPanningRule_1(uintptr_t* out_ePanningRule) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x22592EC))(0, out_ePanningRule);
	}
	template <typename T = uintptr_t> static T SetPanningRule(uintptr_t in_ePanningRule, uint64_t in_idOutput) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x225947C))(0, in_ePanningRule, in_idOutput);
	}
	template <typename T = uintptr_t> static T SetPanningRule_1(uintptr_t in_ePanningRule) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2259624))(0, in_ePanningRule);
	}
	template <typename T = uintptr_t> static T GetSpeakerAngles(Il2CppArray<uintptr_t>* io_pfSpeakerAngles, uintptr_t io_uNumAngles, uintptr_t* out_fHeightAngle, uint64_t in_idOutput) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t*, uint64_t))(Il2CppBase() + 0x22597A4))(0, io_pfSpeakerAngles, io_uNumAngles, out_fHeightAngle, in_idOutput);
	}
	template <typename T = uintptr_t> static T GetSpeakerAngles_1(Il2CppArray<uintptr_t>* io_pfSpeakerAngles, uintptr_t io_uNumAngles, uintptr_t* out_fHeightAngle) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2259980))(0, io_pfSpeakerAngles, io_uNumAngles, out_fHeightAngle);
	}
	template <typename T = uintptr_t> static T SetSpeakerAngles(Il2CppArray<uintptr_t>* in_pfSpeakerAngles, uint32_t in_uNumAngles, float in_fHeightAngle, uint64_t in_idOutput) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uint32_t, float, uint64_t))(Il2CppBase() + 0x2259B40))(0, in_pfSpeakerAngles, in_uNumAngles, in_fHeightAngle, in_idOutput);
	}
	template <typename T = uintptr_t> static T SetSpeakerAngles_1(Il2CppArray<uintptr_t>* in_pfSpeakerAngles, uint32_t in_uNumAngles, float in_fHeightAngle) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uint32_t, float))(Il2CppBase() + 0x2259D0C))(0, in_pfSpeakerAngles, in_uNumAngles, in_fHeightAngle);
	}
	template <typename T = uintptr_t> static T SetVolumeThreshold(float in_fVolumeThresholdDB) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2259EBC))(0, in_fVolumeThresholdDB);
	}
	template <typename T = uintptr_t> static T SetMaxNumVoicesLimit(uint16_t in_maxNumberVoices) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x225A03C))(0, in_maxNumberVoices);
	}
	template <typename T = uintptr_t> static T RenderAudio(bool in_bAllowSyncRender) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x225A1BC))(0, in_bAllowSyncRender);
	}
	template <typename T = uintptr_t> static T RenderAudio_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x225A33C))(0);
	}
	template <typename T = uintptr_t> static T RegisterPluginDLL(Il2CppString* in_DllName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x225A4A4))(0, in_DllName);
	}
	template <typename T = uint32_t> static T GetIDFromString(Il2CppString* in_pszString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x225A64C))(0, in_pszString);
	}
	template <typename T = uint32_t> static T PostEvent(uint32_t in_eventID, uintptr_t in_gameObjectID, uint32_t in_uFlags, uintptr_t in_pfnCallback, uintptr_t in_pCookie, uint32_t in_cExternals, uintptr_t in_pExternalSources, uint32_t in_PlayingID) {
		return ((T (*)(void *, uint32_t, uintptr_t, uint32_t, uintptr_t, uintptr_t, uint32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x225A7F4))(0, in_eventID, in_gameObjectID, in_uFlags, in_pfnCallback, in_pCookie, in_cExternals, in_pExternalSources, in_PlayingID);
	}
	template <typename T = uint32_t> static T PostEvent_1(uint32_t in_eventID, uintptr_t in_gameObjectID, uint32_t in_uFlags, uintptr_t in_pfnCallback, uintptr_t in_pCookie, uint32_t in_cExternals, uintptr_t in_pExternalSources) {
		return ((T (*)(void *, uint32_t, uintptr_t, uint32_t, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x225AB60))(0, in_eventID, in_gameObjectID, in_uFlags, in_pfnCallback, in_pCookie, in_cExternals, in_pExternalSources);
	}
	template <typename T = uint32_t> static T PostEvent_2(uint32_t in_eventID, uintptr_t in_gameObjectID, uint32_t in_uFlags, uintptr_t in_pfnCallback, uintptr_t in_pCookie, uint32_t in_cExternals) {
		return ((T (*)(void *, uint32_t, uintptr_t, uint32_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x225AEC0))(0, in_eventID, in_gameObjectID, in_uFlags, in_pfnCallback, in_pCookie, in_cExternals);
	}
	template <typename T = uint32_t> static T PostEvent_3(uint32_t in_eventID, uintptr_t in_gameObjectID, uint32_t in_uFlags, uintptr_t in_pfnCallback, uintptr_t in_pCookie) {
		return ((T (*)(void *, uint32_t, uintptr_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x225B1F4))(0, in_eventID, in_gameObjectID, in_uFlags, in_pfnCallback, in_pCookie);
	}
	template <typename T = uint32_t> static T PostEvent_4(uint32_t in_eventID, uintptr_t in_gameObjectID, uint32_t in_uFlags) {
		return ((T (*)(void *, uint32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x225B514))(0, in_eventID, in_gameObjectID, in_uFlags);
	}
	template <typename T = uint32_t> static T PostEvent_5(uint32_t in_eventID, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x225B760))(0, in_eventID, in_gameObjectID);
	}
	template <typename T = uint32_t> static T PostEvent_6(Il2CppString* in_pszEventName, uintptr_t in_gameObjectID, uint32_t in_uFlags, uintptr_t in_pfnCallback, uintptr_t in_pCookie, uint32_t in_cExternals, uintptr_t in_pExternalSources, uint32_t in_PlayingID) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uint32_t, uintptr_t, uintptr_t, uint32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x225B99C))(0, in_pszEventName, in_gameObjectID, in_uFlags, in_pfnCallback, in_pCookie, in_cExternals, in_pExternalSources, in_PlayingID);
	}
	template <typename T = uint32_t> static T PostEvent_7(Il2CppString* in_pszEventName, uintptr_t in_gameObjectID, uint32_t in_uFlags, uintptr_t in_pfnCallback, uintptr_t in_pCookie, uint32_t in_cExternals, uintptr_t in_pExternalSources) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uint32_t, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x225BD34))(0, in_pszEventName, in_gameObjectID, in_uFlags, in_pfnCallback, in_pCookie, in_cExternals, in_pExternalSources);
	}
	template <typename T = uint32_t> static T PostEvent_8(Il2CppString* in_pszEventName, uintptr_t in_gameObjectID, uint32_t in_uFlags, uintptr_t in_pfnCallback, uintptr_t in_pCookie, uint32_t in_cExternals) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uint32_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x225C0C0))(0, in_pszEventName, in_gameObjectID, in_uFlags, in_pfnCallback, in_pCookie, in_cExternals);
	}
	template <typename T = uint32_t> static T PostEvent_9(Il2CppString* in_pszEventName, uintptr_t in_gameObjectID, uint32_t in_uFlags, uintptr_t in_pfnCallback, uintptr_t in_pCookie) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x225C418))(0, in_pszEventName, in_gameObjectID, in_uFlags, in_pfnCallback, in_pCookie);
	}
	template <typename T = uint32_t> static T PostEvent_10(Il2CppString* in_pszEventName, uintptr_t in_gameObjectID, uint32_t in_uFlags) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uint32_t))(Il2CppBase() + 0x225C75C))(0, in_pszEventName, in_gameObjectID, in_uFlags);
	}
	template <typename T = uint32_t> static T PostEvent_11(Il2CppString* in_pszEventName, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x225C9D0))(0, in_pszEventName, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T ExecuteActionOnEvent(uint32_t in_eventID, uintptr_t in_ActionType, uintptr_t in_gameObjectID, int32_t in_uTransitionDuration, uintptr_t in_eFadeCurve, uint32_t in_PlayingID) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t, int32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x225CC34))(0, in_eventID, in_ActionType, in_gameObjectID, in_uTransitionDuration, in_eFadeCurve, in_PlayingID);
	}
	template <typename T = uintptr_t> static T ExecuteActionOnEvent_1(uint32_t in_eventID, uintptr_t in_ActionType, uintptr_t in_gameObjectID, int32_t in_uTransitionDuration, uintptr_t in_eFadeCurve) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x225CE4C))(0, in_eventID, in_ActionType, in_gameObjectID, in_uTransitionDuration, in_eFadeCurve);
	}
	template <typename T = uintptr_t> static T ExecuteActionOnEvent_2(uint32_t in_eventID, uintptr_t in_ActionType, uintptr_t in_gameObjectID, int32_t in_uTransitionDuration) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x225D058))(0, in_eventID, in_ActionType, in_gameObjectID, in_uTransitionDuration);
	}
	template <typename T = uintptr_t> static T ExecuteActionOnEvent_3(uint32_t in_eventID, uintptr_t in_ActionType, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x225D254))(0, in_eventID, in_ActionType, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T ExecuteActionOnEvent_4(uint32_t in_eventID, uintptr_t in_ActionType) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x225D444))(0, in_eventID, in_ActionType);
	}
	template <typename T = uintptr_t> static T ExecuteActionOnEvent_5(Il2CppString* in_pszEventName, uintptr_t in_ActionType, uintptr_t in_gameObjectID, int32_t in_uTransitionDuration, uintptr_t in_eFadeCurve, uint32_t in_PlayingID) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, int32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x225D5D4))(0, in_pszEventName, in_ActionType, in_gameObjectID, in_uTransitionDuration, in_eFadeCurve, in_PlayingID);
	}
	template <typename T = uintptr_t> static T ExecuteActionOnEvent_6(Il2CppString* in_pszEventName, uintptr_t in_ActionType, uintptr_t in_gameObjectID, int32_t in_uTransitionDuration, uintptr_t in_eFadeCurve) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x225D818))(0, in_pszEventName, in_ActionType, in_gameObjectID, in_uTransitionDuration, in_eFadeCurve);
	}
	template <typename T = uintptr_t> static T ExecuteActionOnEvent_7(Il2CppString* in_pszEventName, uintptr_t in_ActionType, uintptr_t in_gameObjectID, int32_t in_uTransitionDuration) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x225DA50))(0, in_pszEventName, in_ActionType, in_gameObjectID, in_uTransitionDuration);
	}
	template <typename T = uintptr_t> static T ExecuteActionOnEvent_8(Il2CppString* in_pszEventName, uintptr_t in_ActionType, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x225DC7C))(0, in_pszEventName, in_ActionType, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T ExecuteActionOnEvent_9(Il2CppString* in_pszEventName, uintptr_t in_ActionType) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x225DE9C))(0, in_pszEventName, in_ActionType);
	}
	template <typename T = uintptr_t> static T PostMIDIOnEvent(uint32_t in_eventID, uintptr_t in_gameObjectID, uintptr_t in_pPosts, uint16_t in_uNumPosts) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t, uint16_t))(Il2CppBase() + 0x225E054))(0, in_eventID, in_gameObjectID, in_pPosts, in_uNumPosts);
	}
	template <typename T = uintptr_t> static T StopMIDIOnEvent(uint32_t in_eventID, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x225E27C))(0, in_eventID, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T StopMIDIOnEvent_1(uint32_t in_eventID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x225E468))(0, in_eventID);
	}
	template <typename T = uintptr_t> static T StopMIDIOnEvent_2() {
		return ((T (*)(void *))(Il2CppBase() + 0x225E5E8))(0);
	}
	template <typename T = uintptr_t> static T PinEventInStreamCache(uint32_t in_eventID, signed char in_uActivePriority, signed char in_uInactivePriority) {
		return ((T (*)(void *, uint32_t, signed char, signed char))(Il2CppBase() + 0x225E750))(0, in_eventID, in_uActivePriority, in_uInactivePriority);
	}
	template <typename T = uintptr_t> static T PinEventInStreamCache_1(Il2CppString* in_pszEventName, signed char in_uActivePriority, signed char in_uInactivePriority) {
		return ((T (*)(void *, Il2CppString*, signed char, signed char))(Il2CppBase() + 0x225E8F8))(0, in_pszEventName, in_uActivePriority, in_uInactivePriority);
	}
	template <typename T = uintptr_t> static T UnpinEventInStreamCache(uint32_t in_eventID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x225EAC8))(0, in_eventID);
	}
	template <typename T = uintptr_t> static T UnpinEventInStreamCache_1(Il2CppString* in_pszEventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x225EC48))(0, in_pszEventName);
	}
	template <typename T = uintptr_t> static T GetBufferStatusForPinnedEvent(uint32_t in_eventID, uintptr_t* out_fPercentBuffered, uintptr_t* out_bCachePinnedMemoryFull) {
		return ((T (*)(void *, uint32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x225EDF0))(0, in_eventID, out_fPercentBuffered, out_bCachePinnedMemoryFull);
	}
	template <typename T = uintptr_t> static T GetBufferStatusForPinnedEvent_1(Il2CppString* in_pszEventName, uintptr_t* out_fPercentBuffered, uintptr_t* out_bCachePinnedMemoryFull) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x225EFB4))(0, in_pszEventName, out_fPercentBuffered, out_bCachePinnedMemoryFull);
	}
	template <typename T = uintptr_t> static T SeekOnEvent(uint32_t in_eventID, uintptr_t in_gameObjectID, int32_t in_iPosition, bool in_bSeekToNearestMarker, uint32_t in_PlayingID) {
		return ((T (*)(void *, uint32_t, uintptr_t, int32_t, bool, uint32_t))(Il2CppBase() + 0x225F1A4))(0, in_eventID, in_gameObjectID, in_iPosition, in_bSeekToNearestMarker, in_PlayingID);
	}
	template <typename T = uintptr_t> static T SeekOnEvent_1(uint32_t in_eventID, uintptr_t in_gameObjectID, int32_t in_iPosition, bool in_bSeekToNearestMarker) {
		return ((T (*)(void *, uint32_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x225F3BC))(0, in_eventID, in_gameObjectID, in_iPosition, in_bSeekToNearestMarker);
	}
	template <typename T = uintptr_t> static T SeekOnEvent_2(uint32_t in_eventID, uintptr_t in_gameObjectID, int32_t in_iPosition) {
		return ((T (*)(void *, uint32_t, uintptr_t, int32_t))(Il2CppBase() + 0x225F5C4))(0, in_eventID, in_gameObjectID, in_iPosition);
	}
	template <typename T = uintptr_t> static T SeekOnEvent_3(Il2CppString* in_pszEventName, uintptr_t in_gameObjectID, int32_t in_iPosition, bool in_bSeekToNearestMarker, uint32_t in_PlayingID) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, int32_t, bool, uint32_t))(Il2CppBase() + 0x225F7C0))(0, in_pszEventName, in_gameObjectID, in_iPosition, in_bSeekToNearestMarker, in_PlayingID);
	}
	template <typename T = uintptr_t> static T SeekOnEvent_4(Il2CppString* in_pszEventName, uintptr_t in_gameObjectID, int32_t in_iPosition, bool in_bSeekToNearestMarker) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x225F9F4))(0, in_pszEventName, in_gameObjectID, in_iPosition, in_bSeekToNearestMarker);
	}
	template <typename T = uintptr_t> static T SeekOnEvent_5(Il2CppString* in_pszEventName, uintptr_t in_gameObjectID, int32_t in_iPosition) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x225FC24))(0, in_pszEventName, in_gameObjectID, in_iPosition);
	}
	template <typename T = uintptr_t> static T SeekOnEvent_6(uint32_t in_eventID, uintptr_t in_gameObjectID, float in_fPercent, bool in_bSeekToNearestMarker, uint32_t in_PlayingID) {
		return ((T (*)(void *, uint32_t, uintptr_t, float, bool, uint32_t))(Il2CppBase() + 0x225FE48))(0, in_eventID, in_gameObjectID, in_fPercent, in_bSeekToNearestMarker, in_PlayingID);
	}
	template <typename T = uintptr_t> static T SeekOnEvent_7(uint32_t in_eventID, uintptr_t in_gameObjectID, float in_fPercent, bool in_bSeekToNearestMarker) {
		return ((T (*)(void *, uint32_t, uintptr_t, float, bool))(Il2CppBase() + 0x226006C))(0, in_eventID, in_gameObjectID, in_fPercent, in_bSeekToNearestMarker);
	}
	template <typename T = uintptr_t> static T SeekOnEvent_8(uint32_t in_eventID, uintptr_t in_gameObjectID, float in_fPercent) {
		return ((T (*)(void *, uint32_t, uintptr_t, float))(Il2CppBase() + 0x2260284))(0, in_eventID, in_gameObjectID, in_fPercent);
	}
	template <typename T = uintptr_t> static T SeekOnEvent_9(Il2CppString* in_pszEventName, uintptr_t in_gameObjectID, float in_fPercent, bool in_bSeekToNearestMarker, uint32_t in_PlayingID) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, float, bool, uint32_t))(Il2CppBase() + 0x226048C))(0, in_pszEventName, in_gameObjectID, in_fPercent, in_bSeekToNearestMarker, in_PlayingID);
	}
	template <typename T = uintptr_t> static T SeekOnEvent_10(Il2CppString* in_pszEventName, uintptr_t in_gameObjectID, float in_fPercent, bool in_bSeekToNearestMarker) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, float, bool))(Il2CppBase() + 0x22606E0))(0, in_pszEventName, in_gameObjectID, in_fPercent, in_bSeekToNearestMarker);
	}
	template <typename T = uintptr_t> static T SeekOnEvent_11(Il2CppString* in_pszEventName, uintptr_t in_gameObjectID, float in_fPercent) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, float))(Il2CppBase() + 0x2260928))(0, in_pszEventName, in_gameObjectID, in_fPercent);
	}
	template <typename T = void> static T CancelEventCallbackCookie(uintptr_t in_pCookie) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2260B60))(0, in_pCookie);
	}
	template <typename T = void> static T CancelEventCallbackGameObject(uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2260C08))(0, in_gameObjectID);
	}
	template <typename T = void> static T CancelEventCallback(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2260DE4))(0, in_playingID);
	}
	template <typename T = uintptr_t> static T GetSourcePlayPosition(uint32_t in_PlayingID, uintptr_t* out_puPosition, bool in_bExtrapolate) {
		return ((T (*)(void *, uint32_t, uintptr_t*, bool))(Il2CppBase() + 0x2260E8C))(0, in_PlayingID, out_puPosition, in_bExtrapolate);
	}
	template <typename T = uintptr_t> static T GetSourcePlayPosition_1(uint32_t in_PlayingID, uintptr_t* out_puPosition) {
		return ((T (*)(void *, uint32_t, uintptr_t*))(Il2CppBase() + 0x2261044))(0, in_PlayingID, out_puPosition);
	}
	template <typename T = uintptr_t> static T GetSourceStreamBuffering(uint32_t in_PlayingID, uintptr_t* out_buffering, uintptr_t* out_bIsBuffering) {
		return ((T (*)(void *, uint32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x22611E4))(0, in_PlayingID, out_buffering, out_bIsBuffering);
	}
	template <typename T = void> static T StopAll(uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22613A8))(0, in_gameObjectID);
	}
	template <typename T = void> static T StopAll_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x2261584))(0);
	}
	template <typename T = void> static T StopPlayingID(uint32_t in_playingID, int32_t in_uTransitionDuration, uintptr_t in_eFadeCurve) {
		return ((T (*)(void *, uint32_t, int32_t, uintptr_t))(Il2CppBase() + 0x22616EC))(0, in_playingID, in_uTransitionDuration, in_eFadeCurve);
	}
	template <typename T = void> static T StopPlayingID_1(uint32_t in_playingID, int32_t in_uTransitionDuration) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x2261894))(0, in_playingID, in_uTransitionDuration);
	}
	template <typename T = void> static T StopPlayingID_2(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2261A24))(0, in_playingID);
	}
	template <typename T = void> static T SetRandomSeed(uint32_t in_uSeed) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2261BA4))(0, in_uSeed);
	}
	template <typename T = void> static T MuteBackgroundMusic(bool in_bMute) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2261D24))(0, in_bMute);
	}
	template <typename T = bool> static T GetBackgroundMusicMute() {
		return ((T (*)(void *))(Il2CppBase() + 0x2261EA4))(0);
	}
	template <typename T = uintptr_t> static T SendPluginCustomGameData(uint32_t in_busID, uintptr_t in_busObjectID, uintptr_t in_eType, uint32_t in_uCompanyID, uint32_t in_uPluginID, uintptr_t in_pData, uint32_t in_uSizeInBytes) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t, uint32_t, uint32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x2262014))(0, in_busID, in_busObjectID, in_eType, in_uCompanyID, in_uPluginID, in_pData, in_uSizeInBytes);
	}
	template <typename T = uintptr_t> static T UnregisterAllGameObj() {
		return ((T (*)(void *))(Il2CppBase() + 0x2262244))(0);
	}
	template <typename T = uintptr_t> static T SetMultiplePositions(uintptr_t in_GameObjectID, uintptr_t in_pPositions, uint16_t in_NumPositions, uintptr_t in_eMultiPositionType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint16_t, uintptr_t))(Il2CppBase() + 0x22623AC))(0, in_GameObjectID, in_pPositions, in_NumPositions, in_eMultiPositionType);
	}
	template <typename T = uintptr_t> static T SetMultiplePositions_1(uintptr_t in_GameObjectID, uintptr_t in_pPositions, uint16_t in_NumPositions) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint16_t))(Il2CppBase() + 0x22625C4))(0, in_GameObjectID, in_pPositions, in_NumPositions);
	}
	template <typename T = uintptr_t> static T SetMultiplePositions_2(uintptr_t in_GameObjectID, uintptr_t in_pPositions, uint16_t in_NumPositions, uintptr_t in_eMultiPositionType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint16_t, uintptr_t))(Il2CppBase() + 0x22627CC))(0, in_GameObjectID, in_pPositions, in_NumPositions, in_eMultiPositionType);
	}
	template <typename T = uintptr_t> static T SetMultiplePositions_3(uintptr_t in_GameObjectID, uintptr_t in_pPositions, uint16_t in_NumPositions) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint16_t))(Il2CppBase() + 0x22629E4))(0, in_GameObjectID, in_pPositions, in_NumPositions);
	}
	template <typename T = uintptr_t> static T SetScalingFactor(uintptr_t in_GameObjectID, float in_fAttenuationScalingFactor) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2262BEC))(0, in_GameObjectID, in_fAttenuationScalingFactor);
	}
	template <typename T = uintptr_t> static T ClearBanks() {
		return ((T (*)(void *))(Il2CppBase() + 0x2262DE4))(0);
	}
	template <typename T = uintptr_t> static T SetBankLoadIOSettings(float in_fThroughput, signed char in_priority) {
		return ((T (*)(void *, float, signed char))(Il2CppBase() + 0x2262F4C))(0, in_fThroughput, in_priority);
	}
	template <typename T = uintptr_t> static T LoadBank(Il2CppString* in_pszString, int32_t in_memPoolId, uintptr_t* out_bankID) {
		return ((T (*)(void *, Il2CppString*, int32_t, uintptr_t*))(Il2CppBase() + 0x22630DC))(0, in_pszString, in_memPoolId, out_bankID);
	}
	template <typename T = uintptr_t> static T LoadBank_1(uint32_t in_bankID, int32_t in_memPoolId) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x22632C0))(0, in_bankID, in_memPoolId);
	}
	template <typename T = uintptr_t> static T LoadBank_2(uintptr_t in_pInMemoryBankPtr, uint32_t in_uInMemoryBankSize, uintptr_t* out_bankID) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t*))(Il2CppBase() + 0x2263450))(0, in_pInMemoryBankPtr, in_uInMemoryBankSize, out_bankID);
	}
	template <typename T = uintptr_t> static T LoadBank_3(uintptr_t in_pInMemoryBankPtr, uint32_t in_uInMemoryBankSize, int32_t in_uPoolForBankMedia, uintptr_t* out_bankID) {
		return ((T (*)(void *, uintptr_t, uint32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x2263608))(0, in_pInMemoryBankPtr, in_uInMemoryBankSize, in_uPoolForBankMedia, out_bankID);
	}
	template <typename T = uintptr_t> static T LoadBank_4(Il2CppString* in_pszString, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie, int32_t in_memPoolId, uintptr_t* out_bankID) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x22637D0))(0, in_pszString, in_pfnBankCallback, in_pCookie, in_memPoolId, out_bankID);
	}
	template <typename T = uintptr_t> static T LoadBank_5(uint32_t in_bankID, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie, int32_t in_memPoolId) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2263A54))(0, in_bankID, in_pfnBankCallback, in_pCookie, in_memPoolId);
	}
	template <typename T = uintptr_t> static T LoadBank_6(uintptr_t in_pInMemoryBankPtr, uint32_t in_uInMemoryBankSize, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie, uintptr_t* out_bankID) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2263C88))(0, in_pInMemoryBankPtr, in_uInMemoryBankSize, in_pfnBankCallback, in_pCookie, out_bankID);
	}
	template <typename T = uintptr_t> static T LoadBank_7(uintptr_t in_pInMemoryBankPtr, uint32_t in_uInMemoryBankSize, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie, int32_t in_uPoolForBankMedia, uintptr_t* out_bankID) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x2263EE0))(0, in_pInMemoryBankPtr, in_uInMemoryBankSize, in_pfnBankCallback, in_pCookie, in_uPoolForBankMedia, out_bankID);
	}
	template <typename T = uintptr_t> static T UnloadBank(Il2CppString* in_pszString, uintptr_t in_pInMemoryBankPtr, uintptr_t* out_pMemPoolId) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2264144))(0, in_pszString, in_pInMemoryBankPtr, out_pMemPoolId);
	}
	template <typename T = uintptr_t> static T UnloadBank_1(Il2CppString* in_pszString, uintptr_t in_pInMemoryBankPtr) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2264328))(0, in_pszString, in_pInMemoryBankPtr);
	}
	template <typename T = uintptr_t> static T UnloadBank_2(uint32_t in_bankID, uintptr_t in_pInMemoryBankPtr, uintptr_t* out_pMemPoolId) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x22644E0))(0, in_bankID, in_pInMemoryBankPtr, out_pMemPoolId);
	}
	template <typename T = uintptr_t> static T UnloadBank_3(uint32_t in_bankID, uintptr_t in_pInMemoryBankPtr) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x2264698))(0, in_bankID, in_pInMemoryBankPtr);
	}
	template <typename T = uintptr_t> static T UnloadBank_4(Il2CppString* in_pszString, uintptr_t in_pInMemoryBankPtr, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2264828))(0, in_pszString, in_pInMemoryBankPtr, in_pfnBankCallback, in_pCookie);
	}
	template <typename T = uintptr_t> static T UnloadBank_5(uint32_t in_bankID, uintptr_t in_pInMemoryBankPtr, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2264A88))(0, in_bankID, in_pInMemoryBankPtr, in_pfnBankCallback, in_pCookie);
	}
	template <typename T = void> static T CancelBankCallbackCookie(uintptr_t in_pCookie) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2264CBC))(0, in_pCookie);
	}
	template <typename T = uintptr_t> static T PrepareBank(uintptr_t in_PreparationType, Il2CppString* in_pszString, uintptr_t in_uFlags) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2264D64))(0, in_PreparationType, in_pszString, in_uFlags);
	}
	template <typename T = uintptr_t> static T PrepareBank_1(uintptr_t in_PreparationType, Il2CppString* in_pszString) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2264F38))(0, in_PreparationType, in_pszString);
	}
	template <typename T = uintptr_t> static T PrepareBank_2(uintptr_t in_PreparationType, uint32_t in_bankID, uintptr_t in_uFlags) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x22650F4))(0, in_PreparationType, in_bankID, in_uFlags);
	}
	template <typename T = uintptr_t> static T PrepareBank_3(uintptr_t in_PreparationType, uint32_t in_bankID) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x226529C))(0, in_PreparationType, in_bankID);
	}
	template <typename T = uintptr_t> static T PrepareBank_4(uintptr_t in_PreparationType, Il2CppString* in_pszString, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie, uintptr_t in_uFlags) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x226542C))(0, in_PreparationType, in_pszString, in_pfnBankCallback, in_pCookie, in_uFlags);
	}
	template <typename T = uintptr_t> static T PrepareBank_5(uintptr_t in_PreparationType, Il2CppString* in_pszString, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x22656A0))(0, in_PreparationType, in_pszString, in_pfnBankCallback, in_pCookie);
	}
	template <typename T = uintptr_t> static T PrepareBank_6(uintptr_t in_PreparationType, uint32_t in_bankID, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie, uintptr_t in_uFlags) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2265904))(0, in_PreparationType, in_bankID, in_pfnBankCallback, in_pCookie, in_uFlags);
	}
	template <typename T = uintptr_t> static T PrepareBank_7(uintptr_t in_PreparationType, uint32_t in_bankID, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2265B48))(0, in_PreparationType, in_bankID, in_pfnBankCallback, in_pCookie);
	}
	template <typename T = uintptr_t> static T ClearPreparedEvents() {
		return ((T (*)(void *))(Il2CppBase() + 0x2265D7C))(0);
	}
	template <typename T = uintptr_t> static T PrepareEvent(uintptr_t in_PreparationType, Il2CppArray<uintptr_t>* in_ppszString, uint32_t in_uNumEvent) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x2265EE4))(0, in_PreparationType, in_ppszString, in_uNumEvent);
	}
	template <typename T = uintptr_t> static T PrepareEvent_1(uintptr_t in_PreparationType, Il2CppArray<uintptr_t>* in_pEventID, uint32_t in_uNumEvent) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x2266358))(0, in_PreparationType, in_pEventID, in_uNumEvent);
	}
	template <typename T = uintptr_t> static T PrepareEvent_2(uintptr_t in_PreparationType, Il2CppArray<uintptr_t>* in_ppszString, uint32_t in_uNumEvent, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2266508))(0, in_PreparationType, in_ppszString, in_uNumEvent, in_pfnBankCallback, in_pCookie);
	}
	template <typename T = uintptr_t> static T PrepareEvent_3(uintptr_t in_PreparationType, Il2CppArray<uintptr_t>* in_pEventID, uint32_t in_uNumEvent, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2266A18))(0, in_PreparationType, in_pEventID, in_uNumEvent, in_pfnBankCallback, in_pCookie);
	}
	template <typename T = uintptr_t> static T SetMedia(uintptr_t in_pSourceSettings, uint32_t in_uNumSourceSettings) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2266C64))(0, in_pSourceSettings, in_uNumSourceSettings);
	}
	template <typename T = uintptr_t> static T UnsetMedia(uintptr_t in_pSourceSettings, uint32_t in_uNumSourceSettings) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2266F04))(0, in_pSourceSettings, in_uNumSourceSettings);
	}
	template <typename T = uintptr_t> static T PrepareGameSyncs(uintptr_t in_PreparationType, uintptr_t in_eGameSyncType, Il2CppString* in_pszGroupName, Il2CppArray<uintptr_t>* in_ppszGameSyncName, uint32_t in_uNumGameSyncs) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x2267110))(0, in_PreparationType, in_eGameSyncType, in_pszGroupName, in_ppszGameSyncName, in_uNumGameSyncs);
	}
	template <typename T = uintptr_t> static T PrepareGameSyncs_1(uintptr_t in_PreparationType, uintptr_t in_eGameSyncType, uint32_t in_GroupID, Il2CppArray<uintptr_t>* in_paGameSyncID, uint32_t in_uNumGameSyncs) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x22675C8))(0, in_PreparationType, in_eGameSyncType, in_GroupID, in_paGameSyncID, in_uNumGameSyncs);
	}
	template <typename T = uintptr_t> static T PrepareGameSyncs_2(uintptr_t in_PreparationType, uintptr_t in_eGameSyncType, Il2CppString* in_pszGroupName, Il2CppArray<uintptr_t>* in_ppszGameSyncName, uint32_t in_uNumGameSyncs, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2267790))(0, in_PreparationType, in_eGameSyncType, in_pszGroupName, in_ppszGameSyncName, in_uNumGameSyncs, in_pfnBankCallback, in_pCookie);
	}
	template <typename T = uintptr_t> static T PrepareGameSyncs_3(uintptr_t in_PreparationType, uintptr_t in_eGameSyncType, uint32_t in_GroupID, Il2CppArray<uintptr_t>* in_paGameSyncID, uint32_t in_uNumGameSyncs, uintptr_t in_pfnBankCallback, uintptr_t in_pCookie) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t, Il2CppArray<uintptr_t>*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2267CE4))(0, in_PreparationType, in_eGameSyncType, in_GroupID, in_paGameSyncID, in_uNumGameSyncs, in_pfnBankCallback, in_pCookie);
	}
	template <typename T = uintptr_t> static T AddListener(uintptr_t in_emitterGameObj, uintptr_t in_listenerGameObj) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2267F50))(0, in_emitterGameObj, in_listenerGameObj);
	}
	template <typename T = uintptr_t> static T RemoveListener(uintptr_t in_emitterGameObj, uintptr_t in_listenerGameObj) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x226814C))(0, in_emitterGameObj, in_listenerGameObj);
	}
	template <typename T = uintptr_t> static T AddDefaultListener(uintptr_t in_listenerGameObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2268348))(0, in_listenerGameObj);
	}
	template <typename T = uintptr_t> static T RemoveDefaultListener(uintptr_t in_listenerGameObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2268524))(0, in_listenerGameObj);
	}
	template <typename T = uintptr_t> static T ResetListenersToDefault(uintptr_t in_emitterGameObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2268700))(0, in_emitterGameObj);
	}
	template <typename T = uintptr_t> static T SetListenerSpatialization(uintptr_t in_uListenerID, bool in_bSpatialized, uintptr_t in_channelConfig, Il2CppArray<uintptr_t>* in_pVolumeOffsets) {
		return ((T (*)(void *, uintptr_t, bool, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x22688DC))(0, in_uListenerID, in_bSpatialized, in_channelConfig, in_pVolumeOffsets);
	}
	template <typename T = uintptr_t> static T SetListenerSpatialization_1(uintptr_t in_uListenerID, bool in_bSpatialized, uintptr_t in_channelConfig) {
		return ((T (*)(void *, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x2268AF8))(0, in_uListenerID, in_bSpatialized, in_channelConfig);
	}
	template <typename T = uintptr_t> static T SetRTPCValue(uint32_t in_rtpcID, float in_value, uintptr_t in_gameObjectID, int32_t in_uValueChangeDuration, uintptr_t in_eFadeCurve, bool in_bBypassInternalValueInterpolation) {
		return ((T (*)(void *, uint32_t, float, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x2268D00))(0, in_rtpcID, in_value, in_gameObjectID, in_uValueChangeDuration, in_eFadeCurve, in_bBypassInternalValueInterpolation);
	}
	template <typename T = uintptr_t> static T SetRTPCValue_1(uint32_t in_rtpcID, float in_value, uintptr_t in_gameObjectID, int32_t in_uValueChangeDuration, uintptr_t in_eFadeCurve) {
		return ((T (*)(void *, uint32_t, float, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2268F18))(0, in_rtpcID, in_value, in_gameObjectID, in_uValueChangeDuration, in_eFadeCurve);
	}
	template <typename T = uintptr_t> static T SetRTPCValue_2(uint32_t in_rtpcID, float in_value, uintptr_t in_gameObjectID, int32_t in_uValueChangeDuration) {
		return ((T (*)(void *, uint32_t, float, uintptr_t, int32_t))(Il2CppBase() + 0x2269124))(0, in_rtpcID, in_value, in_gameObjectID, in_uValueChangeDuration);
	}
	template <typename T = uintptr_t> static T SetRTPCValue_3(uint32_t in_rtpcID, float in_value, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uint32_t, float, uintptr_t))(Il2CppBase() + 0x2269320))(0, in_rtpcID, in_value, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T SetRTPCValue_4(uint32_t in_rtpcID, float in_value) {
		return ((T (*)(void *, uint32_t, float))(Il2CppBase() + 0x2269510))(0, in_rtpcID, in_value);
	}
	template <typename T = uintptr_t> static T SetRTPCValue_5(Il2CppString* in_pszRtpcName, float in_value, uintptr_t in_gameObjectID, int32_t in_uValueChangeDuration, uintptr_t in_eFadeCurve, bool in_bBypassInternalValueInterpolation) {
		return ((T (*)(void *, Il2CppString*, float, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x22696A0))(0, in_pszRtpcName, in_value, in_gameObjectID, in_uValueChangeDuration, in_eFadeCurve, in_bBypassInternalValueInterpolation);
	}
	template <typename T = uintptr_t> static T SetRTPCValue_6(Il2CppString* in_pszRtpcName, float in_value, uintptr_t in_gameObjectID, int32_t in_uValueChangeDuration, uintptr_t in_eFadeCurve) {
		return ((T (*)(void *, Il2CppString*, float, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x22698E4))(0, in_pszRtpcName, in_value, in_gameObjectID, in_uValueChangeDuration, in_eFadeCurve);
	}
	template <typename T = uintptr_t> static T SetRTPCValue_7(Il2CppString* in_pszRtpcName, float in_value, uintptr_t in_gameObjectID, int32_t in_uValueChangeDuration) {
		return ((T (*)(void *, Il2CppString*, float, uintptr_t, int32_t))(Il2CppBase() + 0x2269B1C))(0, in_pszRtpcName, in_value, in_gameObjectID, in_uValueChangeDuration);
	}
	template <typename T = uintptr_t> static T SetRTPCValue_8(Il2CppString* in_pszRtpcName, float in_value, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, Il2CppString*, float, uintptr_t))(Il2CppBase() + 0x2269D48))(0, in_pszRtpcName, in_value, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T SetRTPCValue_9(Il2CppString* in_pszRtpcName, float in_value) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x2269F68))(0, in_pszRtpcName, in_value);
	}
	template <typename T = uintptr_t> static T SetRTPCValueByPlayingID(uint32_t in_rtpcID, float in_value, uint32_t in_playingID, int32_t in_uValueChangeDuration, uintptr_t in_eFadeCurve, bool in_bBypassInternalValueInterpolation) {
		return ((T (*)(void *, uint32_t, float, uint32_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x226A120))(0, in_rtpcID, in_value, in_playingID, in_uValueChangeDuration, in_eFadeCurve, in_bBypassInternalValueInterpolation);
	}
	template <typename T = uintptr_t> static T SetRTPCValueByPlayingID_1(uint32_t in_rtpcID, float in_value, uint32_t in_playingID, int32_t in_uValueChangeDuration, uintptr_t in_eFadeCurve) {
		return ((T (*)(void *, uint32_t, float, uint32_t, int32_t, uintptr_t))(Il2CppBase() + 0x226A2F0))(0, in_rtpcID, in_value, in_playingID, in_uValueChangeDuration, in_eFadeCurve);
	}
	template <typename T = uintptr_t> static T SetRTPCValueByPlayingID_2(uint32_t in_rtpcID, float in_value, uint32_t in_playingID, int32_t in_uValueChangeDuration) {
		return ((T (*)(void *, uint32_t, float, uint32_t, int32_t))(Il2CppBase() + 0x226A4B0))(0, in_rtpcID, in_value, in_playingID, in_uValueChangeDuration);
	}
	template <typename T = uintptr_t> static T SetRTPCValueByPlayingID_3(uint32_t in_rtpcID, float in_value, uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t, float, uint32_t))(Il2CppBase() + 0x226A664))(0, in_rtpcID, in_value, in_playingID);
	}
	template <typename T = uintptr_t> static T SetRTPCValueByPlayingID_4(Il2CppString* in_pszRtpcName, float in_value, uint32_t in_playingID, int32_t in_uValueChangeDuration, uintptr_t in_eFadeCurve, bool in_bBypassInternalValueInterpolation) {
		return ((T (*)(void *, Il2CppString*, float, uint32_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x226A80C))(0, in_pszRtpcName, in_value, in_playingID, in_uValueChangeDuration, in_eFadeCurve, in_bBypassInternalValueInterpolation);
	}
	template <typename T = uintptr_t> static T SetRTPCValueByPlayingID_5(Il2CppString* in_pszRtpcName, float in_value, uint32_t in_playingID, int32_t in_uValueChangeDuration, uintptr_t in_eFadeCurve) {
		return ((T (*)(void *, Il2CppString*, float, uint32_t, int32_t, uintptr_t))(Il2CppBase() + 0x226AA04))(0, in_pszRtpcName, in_value, in_playingID, in_uValueChangeDuration, in_eFadeCurve);
	}
	template <typename T = uintptr_t> static T SetRTPCValueByPlayingID_6(Il2CppString* in_pszRtpcName, float in_value, uint32_t in_playingID, int32_t in_uValueChangeDuration) {
		return ((T (*)(void *, Il2CppString*, float, uint32_t, int32_t))(Il2CppBase() + 0x226ABF0))(0, in_pszRtpcName, in_value, in_playingID, in_uValueChangeDuration);
	}
	template <typename T = uintptr_t> static T SetRTPCValueByPlayingID_7(Il2CppString* in_pszRtpcName, float in_value, uint32_t in_playingID) {
		return ((T (*)(void *, Il2CppString*, float, uint32_t))(Il2CppBase() + 0x226ADD0))(0, in_pszRtpcName, in_value, in_playingID);
	}
	template <typename T = uintptr_t> static T ResetRTPCValue(uint32_t in_rtpcID, uintptr_t in_gameObjectID, int32_t in_uValueChangeDuration, uintptr_t in_eFadeCurve, bool in_bBypassInternalValueInterpolation) {
		return ((T (*)(void *, uint32_t, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x226AFA0))(0, in_rtpcID, in_gameObjectID, in_uValueChangeDuration, in_eFadeCurve, in_bBypassInternalValueInterpolation);
	}
	template <typename T = uintptr_t> static T ResetRTPCValue_1(uint32_t in_rtpcID, uintptr_t in_gameObjectID, int32_t in_uValueChangeDuration, uintptr_t in_eFadeCurve) {
		return ((T (*)(void *, uint32_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x226B1B8))(0, in_rtpcID, in_gameObjectID, in_uValueChangeDuration, in_eFadeCurve);
	}
	template <typename T = uintptr_t> static T ResetRTPCValue_2(uint32_t in_rtpcID, uintptr_t in_gameObjectID, int32_t in_uValueChangeDuration) {
		return ((T (*)(void *, uint32_t, uintptr_t, int32_t))(Il2CppBase() + 0x226B3C0))(0, in_rtpcID, in_gameObjectID, in_uValueChangeDuration);
	}
	template <typename T = uintptr_t> static T ResetRTPCValue_3(uint32_t in_rtpcID, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x226B5BC))(0, in_rtpcID, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T ResetRTPCValue_4(uint32_t in_rtpcID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x226B7A8))(0, in_rtpcID);
	}
	template <typename T = uintptr_t> static T ResetRTPCValue_5(Il2CppString* in_pszRtpcName, uintptr_t in_gameObjectID, int32_t in_uValueChangeDuration, uintptr_t in_eFadeCurve, bool in_bBypassInternalValueInterpolation) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x226B928))(0, in_pszRtpcName, in_gameObjectID, in_uValueChangeDuration, in_eFadeCurve, in_bBypassInternalValueInterpolation);
	}
	template <typename T = uintptr_t> static T ResetRTPCValue_6(Il2CppString* in_pszRtpcName, uintptr_t in_gameObjectID, int32_t in_uValueChangeDuration, uintptr_t in_eFadeCurve) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x226BB5C))(0, in_pszRtpcName, in_gameObjectID, in_uValueChangeDuration, in_eFadeCurve);
	}
	template <typename T = uintptr_t> static T ResetRTPCValue_7(Il2CppString* in_pszRtpcName, uintptr_t in_gameObjectID, int32_t in_uValueChangeDuration) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x226BD8C))(0, in_pszRtpcName, in_gameObjectID, in_uValueChangeDuration);
	}
	template <typename T = uintptr_t> static T ResetRTPCValue_8(Il2CppString* in_pszRtpcName, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x226BFB0))(0, in_pszRtpcName, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T ResetRTPCValue_9(Il2CppString* in_pszRtpcName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x226C1C4))(0, in_pszRtpcName);
	}
	template <typename T = uintptr_t> static T SetSwitch(uint32_t in_switchGroup, uint32_t in_switchState, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x226C36C))(0, in_switchGroup, in_switchState, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T SetSwitch_1(Il2CppString* in_pszSwitchGroup, Il2CppString* in_pszSwitchState, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x226C55C))(0, in_pszSwitchGroup, in_pszSwitchState, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T PostTrigger(uint32_t in_triggerID, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x226C794))(0, in_triggerID, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T PostTrigger_1(Il2CppString* in_pszTrigger, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x226C980))(0, in_pszTrigger, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T SetState(uint32_t in_stateGroup, uint32_t in_state) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x226CB94))(0, in_stateGroup, in_state);
	}
	template <typename T = uintptr_t> static T SetState_1(Il2CppString* in_pszStateGroup, Il2CppString* in_pszState) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x226CD24))(0, in_pszStateGroup, in_pszState);
	}
	template <typename T = uintptr_t> static T SetGameObjectAuxSendValues(uintptr_t in_gameObjectID, uintptr_t in_aAuxSendValues, uint32_t in_uNumSendValues) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x226CEF4))(0, in_gameObjectID, in_aAuxSendValues, in_uNumSendValues);
	}
	template <typename T = uintptr_t> static T SetGameObjectOutputBusVolume(uintptr_t in_emitterObjID, uintptr_t in_listenerObjID, float in_fControlValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x226D108))(0, in_emitterObjID, in_listenerObjID, in_fControlValue);
	}
	template <typename T = uintptr_t> static T SetActorMixerEffect(uint32_t in_audioNodeID, uint32_t in_uFXIndex, uint32_t in_shareSetID) {
		return ((T (*)(void *, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x226D320))(0, in_audioNodeID, in_uFXIndex, in_shareSetID);
	}
	template <typename T = uintptr_t> static T SetBusEffect(uint32_t in_audioNodeID, uint32_t in_uFXIndex, uint32_t in_shareSetID) {
		return ((T (*)(void *, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x226D4C8))(0, in_audioNodeID, in_uFXIndex, in_shareSetID);
	}
	template <typename T = uintptr_t> static T SetBusEffect_1(Il2CppString* in_pszBusName, uint32_t in_uFXIndex, uint32_t in_shareSetID) {
		return ((T (*)(void *, Il2CppString*, uint32_t, uint32_t))(Il2CppBase() + 0x226D670))(0, in_pszBusName, in_uFXIndex, in_shareSetID);
	}
	template <typename T = uintptr_t> static T SetMixer(uint32_t in_audioNodeID, uint32_t in_shareSetID) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x226D840))(0, in_audioNodeID, in_shareSetID);
	}
	template <typename T = uintptr_t> static T SetMixer_1(Il2CppString* in_pszBusName, uint32_t in_shareSetID) {
		return ((T (*)(void *, Il2CppString*, uint32_t))(Il2CppBase() + 0x226D9D0))(0, in_pszBusName, in_shareSetID);
	}
	template <typename T = uintptr_t> static T SetBusConfig(uint32_t in_audioNodeID, uintptr_t in_channelConfig) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x226DB88))(0, in_audioNodeID, in_channelConfig);
	}
	template <typename T = uintptr_t> static T SetBusConfig_1(Il2CppString* in_pszBusName, uintptr_t in_channelConfig) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x226DD2C))(0, in_pszBusName, in_channelConfig);
	}
	template <typename T = uintptr_t> static T SetObjectObstructionAndOcclusion(uintptr_t in_EmitterID, uintptr_t in_ListenerID, float in_fObstructionLevel, float in_fOcclusionLevel) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x226DEF8))(0, in_EmitterID, in_ListenerID, in_fObstructionLevel, in_fOcclusionLevel);
	}
	template <typename T = uintptr_t> static T SetMultipleObstructionAndOcclusion(uintptr_t in_EmitterID, uintptr_t in_uListenerID, uintptr_t in_fObstructionOcclusionValues, uint32_t in_uNumOcclusionObstruction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x226E120))(0, in_EmitterID, in_uListenerID, in_fObstructionOcclusionValues, in_uNumOcclusionObstruction);
	}
	template <typename T = uintptr_t> static T StartOutputCapture(Il2CppString* in_CaptureFileName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x226E348))(0, in_CaptureFileName);
	}
	template <typename T = uintptr_t> static T StopOutputCapture() {
		return ((T (*)(void *))(Il2CppBase() + 0x226E4F0))(0);
	}
	template <typename T = uintptr_t> static T AddOutputCaptureMarker(Il2CppString* in_MarkerText) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x226E658))(0, in_MarkerText);
	}
	template <typename T = uintptr_t> static T StartProfilerCapture(Il2CppString* in_CaptureFileName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x226E800))(0, in_CaptureFileName);
	}
	template <typename T = uintptr_t> static T StopProfilerCapture() {
		return ((T (*)(void *))(Il2CppBase() + 0x226E9A8))(0);
	}
	template <typename T = uintptr_t> static T RemoveOutput(uint64_t in_idOutput) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x226EB10))(0, in_idOutput);
	}
	template <typename T = uint64_t> static T GetOutputID(uint32_t in_idShareset, uint32_t in_idDevice) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x226ECA8))(0, in_idShareset, in_idDevice);
	}
	template <typename T = uint64_t> static T GetOutputID_1(Il2CppString* in_szShareSet, uint32_t in_idDevice) {
		return ((T (*)(void *, Il2CppString*, uint32_t))(Il2CppBase() + 0x226EE38))(0, in_szShareSet, in_idDevice);
	}
	template <typename T = uintptr_t> static T SetBusDevice(uint32_t in_idBus, uint32_t in_idNewDevice) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x226EFF8))(0, in_idBus, in_idNewDevice);
	}
	template <typename T = uintptr_t> static T SetBusDevice_1(Il2CppString* in_BusName, Il2CppString* in_DeviceName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x226F188))(0, in_BusName, in_DeviceName);
	}
	template <typename T = uintptr_t> static T SetOutputVolume(uint64_t in_idOutput, float in_fVolume) {
		return ((T (*)(void *, uint64_t, float))(Il2CppBase() + 0x226F358))(0, in_idOutput, in_fVolume);
	}
	template <typename T = uintptr_t> static T Suspend(bool in_bRenderAnyway) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x226F508))(0, in_bRenderAnyway);
	}
	template <typename T = uintptr_t> static T Suspend_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x226F688))(0);
	}
	template <typename T = uintptr_t> static T WakeupFromSuspend() {
		return ((T (*)(void *))(Il2CppBase() + 0x226F7F0))(0);
	}
	template <typename T = uint32_t> static T GetBufferTick() {
		return ((T (*)(void *))(Il2CppBase() + 0x226F958))(0);
	}
	template <typename T = unsigned char> static T get_AK_INVALID_MIDI_CHANNEL() {
		return ((T (*)(void *))(Il2CppBase() + 0x226FAC0))(0);
	}
	template <typename T = unsigned char> static T get_AK_INVALID_MIDI_NOTE() {
		return ((T (*)(void *))(Il2CppBase() + 0x226FC28))(0);
	}
	template <typename T = uintptr_t> static T GetPlayingSegmentInfo(uint32_t in_PlayingID, uintptr_t out_segmentInfo, bool in_bExtrapolate) {
		return ((T (*)(void *, uint32_t, uintptr_t, bool))(Il2CppBase() + 0x226FD90))(0, in_PlayingID, out_segmentInfo, in_bExtrapolate);
	}
	template <typename T = uintptr_t> static T GetPlayingSegmentInfo_1(uint32_t in_PlayingID, uintptr_t out_segmentInfo) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x226FFB4))(0, in_PlayingID, out_segmentInfo);
	}
	template <typename T = uintptr_t> static T PostCode(uintptr_t in_eError, uintptr_t in_eErrorLevel, uint32_t in_playingID, uintptr_t in_gameObjID, uint32_t in_audioNodeID, bool in_bIsBus) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t, uintptr_t, uint32_t, bool))(Il2CppBase() + 0x22701C0))(0, in_eError, in_eErrorLevel, in_playingID, in_gameObjID, in_audioNodeID, in_bIsBus);
	}
	template <typename T = uintptr_t> static T PostCode_1(uintptr_t in_eError, uintptr_t in_eErrorLevel, uint32_t in_playingID, uintptr_t in_gameObjID, uint32_t in_audioNodeID) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x22703E4))(0, in_eError, in_eErrorLevel, in_playingID, in_gameObjID, in_audioNodeID);
	}
	template <typename T = uintptr_t> static T PostCode_2(uintptr_t in_eError, uintptr_t in_eErrorLevel, uint32_t in_playingID, uintptr_t in_gameObjID) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x22705F8))(0, in_eError, in_eErrorLevel, in_playingID, in_gameObjID);
	}
	template <typename T = uintptr_t> static T PostCode_3(uintptr_t in_eError, uintptr_t in_eErrorLevel, uint32_t in_playingID) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x2270804))(0, in_eError, in_eErrorLevel, in_playingID);
	}
	template <typename T = uintptr_t> static T PostCode_4(uintptr_t in_eError, uintptr_t in_eErrorLevel) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x22709AC))(0, in_eError, in_eErrorLevel);
	}
	template <typename T = uintptr_t> static T PostString(Il2CppString* in_pszError, uintptr_t in_eErrorLevel, uint32_t in_playingID, uintptr_t in_gameObjID, uint32_t in_audioNodeID, bool in_bIsBus) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uint32_t, uintptr_t, uint32_t, bool))(Il2CppBase() + 0x2270B3C))(0, in_pszError, in_eErrorLevel, in_playingID, in_gameObjID, in_audioNodeID, in_bIsBus);
	}
	template <typename T = uintptr_t> static T PostString_1(Il2CppString* in_pszError, uintptr_t in_eErrorLevel, uint32_t in_playingID, uintptr_t in_gameObjID, uint32_t in_audioNodeID) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uint32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x2270D88))(0, in_pszError, in_eErrorLevel, in_playingID, in_gameObjID, in_audioNodeID);
	}
	template <typename T = uintptr_t> static T PostString_2(Il2CppString* in_pszError, uintptr_t in_eErrorLevel, uint32_t in_playingID, uintptr_t in_gameObjID) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2270FC4))(0, in_pszError, in_eErrorLevel, in_playingID, in_gameObjID);
	}
	template <typename T = uintptr_t> static T PostString_3(Il2CppString* in_pszError, uintptr_t in_eErrorLevel, uint32_t in_playingID) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uint32_t))(Il2CppBase() + 0x22711F8))(0, in_pszError, in_eErrorLevel, in_playingID);
	}
	template <typename T = uintptr_t> static T PostString_4(Il2CppString* in_pszError, uintptr_t in_eErrorLevel) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x22713C8))(0, in_pszError, in_eErrorLevel);
	}
	template <typename T = int32_t> static T GetTimeStamp() {
		return ((T (*)(void *))(Il2CppBase() + 0x2271580))(0);
	}
	template <typename T = uint32_t> static T GetNumNonZeroBits(uint32_t in_uWord) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x22716E8))(0, in_uWord);
	}
	template <typename T = uint32_t> static T ResolveDialogueEvent(uint32_t in_eventID, Il2CppArray<uintptr_t>* in_aArgumentValues, uint32_t in_uNumArguments, uint32_t in_idSequence) {
		return ((T (*)(void *, uint32_t, Il2CppArray<uintptr_t>*, uint32_t, uint32_t))(Il2CppBase() + 0x2271868))(0, in_eventID, in_aArgumentValues, in_uNumArguments, in_idSequence);
	}
	template <typename T = uint32_t> static T ResolveDialogueEvent_1(uint32_t in_eventID, Il2CppArray<uintptr_t>* in_aArgumentValues, uint32_t in_uNumArguments) {
		return ((T (*)(void *, uint32_t, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x2271A24))(0, in_eventID, in_aArgumentValues, in_uNumArguments);
	}
	template <typename T = uintptr_t> static T GetDialogueEventCustomPropertyValue(uint32_t in_eventID, uint32_t in_uPropID, uintptr_t* out_iValue) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t*))(Il2CppBase() + 0x2271BD4))(0, in_eventID, in_uPropID, out_iValue);
	}
	template <typename T = uintptr_t> static T GetDialogueEventCustomPropertyValue_1(uint32_t in_eventID, uint32_t in_uPropID, uintptr_t* out_fValue) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t*))(Il2CppBase() + 0x2271D8C))(0, in_eventID, in_uPropID, out_fValue);
	}
	template <typename T = uintptr_t> static T GetPosition(uintptr_t in_GameObjectID, uintptr_t out_rPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2271F44))(0, in_GameObjectID, out_rPosition);
	}
	template <typename T = uintptr_t> static T GetListenerPosition(uintptr_t in_uIndex, uintptr_t out_rPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x227223C))(0, in_uIndex, out_rPosition);
	}
	template <typename T = uintptr_t> static T GetRTPCValue(uint32_t in_rtpcID, uintptr_t in_gameObjectID, uint32_t in_playingID, uintptr_t* out_rValue, uintptr_t io_rValueType) {
		return ((T (*)(void *, uint32_t, uintptr_t, uint32_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x22724A0))(0, in_rtpcID, in_gameObjectID, in_playingID, out_rValue, io_rValueType);
	}
	template <typename T = uintptr_t> static T GetRTPCValue_1(Il2CppString* in_pszRtpcName, uintptr_t in_gameObjectID, uint32_t in_playingID, uintptr_t* out_rValue, uintptr_t io_rValueType) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uint32_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x22726C8))(0, in_pszRtpcName, in_gameObjectID, in_playingID, out_rValue, io_rValueType);
	}
	template <typename T = uintptr_t> static T GetSwitch(uint32_t in_switchGroup, uintptr_t in_gameObjectID, uintptr_t* out_rSwitchState) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2272918))(0, in_switchGroup, in_gameObjectID, out_rSwitchState);
	}
	template <typename T = uintptr_t> static T GetSwitch_1(Il2CppString* in_pstrSwitchGroupName, uintptr_t in_GameObj, uintptr_t* out_rSwitchState) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2272B28))(0, in_pstrSwitchGroupName, in_GameObj, out_rSwitchState);
	}
	template <typename T = uintptr_t> static T GetState(uint32_t in_stateGroup, uintptr_t* out_rState) {
		return ((T (*)(void *, uint32_t, uintptr_t*))(Il2CppBase() + 0x2272D64))(0, in_stateGroup, out_rState);
	}
	template <typename T = uintptr_t> static T GetState_1(Il2CppString* in_pstrStateGroupName, uintptr_t* out_rState) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2272F04))(0, in_pstrStateGroupName, out_rState);
	}
	template <typename T = uintptr_t> static T GetGameObjectAuxSendValues(uintptr_t in_gameObjectID, uintptr_t out_paAuxSendValues, uintptr_t io_ruNumSendValues) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x22730D0))(0, in_gameObjectID, out_paAuxSendValues, io_ruNumSendValues);
	}
	template <typename T = uintptr_t> static T GetGameObjectDryLevelValue(uintptr_t in_EmitterID, uintptr_t in_ListenerID, uintptr_t* out_rfControlValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x22732E4))(0, in_EmitterID, in_ListenerID, out_rfControlValue);
	}
	template <typename T = uintptr_t> static T GetObjectObstructionAndOcclusion(uintptr_t in_EmitterID, uintptr_t in_ListenerID, uintptr_t* out_rfObstructionLevel, uintptr_t* out_rfOcclusionLevel) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2273500))(0, in_EmitterID, in_ListenerID, out_rfObstructionLevel, out_rfOcclusionLevel);
	}
	template <typename T = uintptr_t> static T QueryAudioObjectIDs(uint32_t in_eventID, uintptr_t io_ruNumItems, uintptr_t out_aObjectInfos) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2273734))(0, in_eventID, io_ruNumItems, out_aObjectInfos);
	}
	template <typename T = uintptr_t> static T QueryAudioObjectIDs_1(Il2CppString* in_pszEventName, uintptr_t io_ruNumItems, uintptr_t out_aObjectInfos) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x22738F0))(0, in_pszEventName, io_ruNumItems, out_aObjectInfos);
	}
	template <typename T = uintptr_t> static T GetPositioningInfo(uint32_t in_ObjectID, uintptr_t out_rPositioningInfo) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x2273AD4))(0, in_ObjectID, out_rPositioningInfo);
	}
	template <typename T = bool> static T GetIsGameObjectActive(uintptr_t in_GameObjId) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2273C78))(0, in_GameObjId);
	}
	template <typename T = float> static T GetMaxRadius(uintptr_t in_GameObjId) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2273E5C))(0, in_GameObjId);
	}
	template <typename T = uint32_t> static T GetEventIDFromPlayingID(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2274038))(0, in_playingID);
	}
	template <typename T = uint64_t> static T GetGameObjectFromPlayingID(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x22741B8))(0, in_playingID);
	}
	template <typename T = uintptr_t> static T GetPlayingIDsFromGameObject(uintptr_t in_GameObjId, uintptr_t io_ruNumIDs, Il2CppArray<uintptr_t>* out_aPlayingIDs) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2274338))(0, in_GameObjId, io_ruNumIDs, out_aPlayingIDs);
	}
	template <typename T = uintptr_t> static T GetCustomPropertyValue(uint32_t in_ObjectID, uint32_t in_uPropID, uintptr_t* out_iValue) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t*))(Il2CppBase() + 0x22745D4))(0, in_ObjectID, in_uPropID, out_iValue);
	}
	template <typename T = uintptr_t> static T GetCustomPropertyValue_1(uint32_t in_ObjectID, uint32_t in_uPropID, uintptr_t* out_fValue) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t*))(Il2CppBase() + 0x227478C))(0, in_ObjectID, in_uPropID, out_fValue);
	}
	template <typename T = void> static T AK_SPEAKER_SETUP_FIX_LEFT_TO_CENTER(uintptr_t io_uChannelMask) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2274944))(0, io_uChannelMask);
	}
	template <typename T = void> static T AK_SPEAKER_SETUP_FIX_REAR_TO_SIDE(uintptr_t io_uChannelMask) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2274AC4))(0, io_uChannelMask);
	}
	template <typename T = void> static T AK_SPEAKER_SETUP_CONVERT_TO_SUPPORTED(uintptr_t io_uChannelMask) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2274C44))(0, io_uChannelMask);
	}
	template <typename T = unsigned char> static T ChannelMaskToNumChannels(uint32_t in_uChannelMask) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2274DC4))(0, in_uChannelMask);
	}
	template <typename T = uint32_t> static T ChannelMaskFromNumChannels(uint32_t in_uNumChannels) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2274F44))(0, in_uNumChannels);
	}
	template <typename T = unsigned char> static T ChannelBitToIndex(uint32_t in_uChannelBit, uint32_t in_uChannelMask) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x22750C4))(0, in_uChannelBit, in_uChannelMask);
	}
	template <typename T = bool> static T HasSurroundChannels(uint32_t in_uChannelMask) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2275254))(0, in_uChannelMask);
	}
	template <typename T = bool> static T HasStrictlyOnePairOfSurroundChannels(uint32_t in_uChannelMask) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x22753DC))(0, in_uChannelMask);
	}
	template <typename T = bool> static T HasSideAndRearChannels(uint32_t in_uChannelMask) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2275564))(0, in_uChannelMask);
	}
	template <typename T = bool> static T HasHeightChannels(uint32_t in_uChannelMask) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x22756EC))(0, in_uChannelMask);
	}
	template <typename T = uint32_t> static T BackToSideChannels(uint32_t in_uChannelMask) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2275874))(0, in_uChannelMask);
	}
	template <typename T = uint32_t> static T StdChannelIndexToDisplayIndex(uintptr_t in_eOrdering, uint32_t in_uChannelMask, uint32_t in_uChannelIdx) {
		return ((T (*)(void *, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x22759F4))(0, in_eOrdering, in_uChannelMask, in_uChannelIdx);
	}
	template <typename T = float> static T get_kDefaultMaxPathLength() {
		return ((T (*)(void *))(Il2CppBase() + 0x2275B9C))(0);
	}
	template <typename T = void> static T set_g_SpatialAudioPoolId(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2275D04))(0, value);
	}
	template <typename T = int32_t> static T get_g_SpatialAudioPoolId() {
		return ((T (*)(void *))(Il2CppBase() + 0x2275E84))(0);
	}
	template <typename T = int32_t> static T GetPoolID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2275FEC))(0);
	}
	template <typename T = uintptr_t> static T RegisterEmitter(uintptr_t in_gameObjectID, uintptr_t in_settings) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2276154))(0, in_gameObjectID, in_settings);
	}
	template <typename T = uintptr_t> static T UnregisterEmitter(uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2276350))(0, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T SetEmitterAuxSendValues(uintptr_t in_gameObjectID, uintptr_t in_pAuxSends, uint32_t in_uNumAux) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x227652C))(0, in_gameObjectID, in_pAuxSends, in_uNumAux);
	}
	template <typename T = uintptr_t> static T SetImageSource(uint32_t in_srcID, uintptr_t in_info, uint32_t in_AuxBusID, uint64_t in_roomID, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uint32_t, uintptr_t, uint32_t, uint64_t, uintptr_t))(Il2CppBase() + 0x2276740))(0, in_srcID, in_info, in_AuxBusID, in_roomID, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T SetImageSource_1(uint32_t in_srcID, uintptr_t in_info, uint32_t in_AuxBusID, uint64_t in_roomID) {
		return ((T (*)(void *, uint32_t, uintptr_t, uint32_t, uint64_t))(Il2CppBase() + 0x2276980))(0, in_srcID, in_info, in_AuxBusID, in_roomID);
	}
	template <typename T = uintptr_t> static T RemoveImageSource(uint32_t in_srcID, uint32_t in_AuxBusID, uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2276B58))(0, in_srcID, in_AuxBusID, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T RemoveImageSource_1(uint32_t in_srcID, uint32_t in_AuxBusID) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x2276D48))(0, in_srcID, in_AuxBusID);
	}
	template <typename T = uintptr_t> static T SetGeometry(uint64_t in_GeomSetID, uintptr_t in_pTriangles, uint32_t in_uNumTriangles) {
		return ((T (*)(void *, uint64_t, uintptr_t, uint32_t))(Il2CppBase() + 0x2276ED8))(0, in_GeomSetID, in_pTriangles, in_uNumTriangles);
	}
	template <typename T = uintptr_t> static T RemoveGeometry(uint64_t in_SetID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x22770A4))(0, in_SetID);
	}
	template <typename T = uintptr_t> static T RemoveRoom(uint64_t in_RoomID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x227723C))(0, in_RoomID);
	}
	template <typename T = uintptr_t> static T RemovePortal(uint64_t in_PortalID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x22773D4))(0, in_PortalID);
	}
	template <typename T = uintptr_t> static T SetGameObjectInRoom(uintptr_t in_gameObjectID, uint64_t in_CurrentRoomID) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x227756C))(0, in_gameObjectID, in_CurrentRoomID);
	}
	template <typename T = uintptr_t> static T SetEmitterObstruction(uintptr_t in_gameObjectID, float in_fObstruction) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x227775C))(0, in_gameObjectID, in_fObstruction);
	}
	template <typename T = uintptr_t> static T SetPortalObstruction(uint64_t in_PortalID, float in_fObstruction) {
		return ((T (*)(void *, uint64_t, float))(Il2CppBase() + 0x2277954))(0, in_PortalID, in_fObstruction);
	}
	template <typename T = uintptr_t> static T GetFastPathSettings(uintptr_t in_settings, uintptr_t in_pfSettings) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2277B04))(0, in_settings, in_pfSettings);
	}
	template <typename T = void> static T SetErrorLogger(uintptr_t logger) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2277CBC))(0, logger);
	}
	template <typename T = void> static T SetErrorLogger_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x2277E50))(0);
	}
	template <typename T = void> static T SetAudioInputCallbacks(uintptr_t getAudioSamples, uintptr_t getAudioFormat) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2277FB8))(0, getAudioSamples, getAudioFormat);
	}
	template <typename T = uintptr_t> static T Init(uintptr_t in_pMemSettings, uintptr_t in_pStmSettings, uintptr_t in_pDefaultDeviceSettings, uintptr_t in_pSettings, uintptr_t in_pPlatformSettings, uintptr_t in_pMusicSettings, uintptr_t in_pSpatialAudioSettings, uint32_t in_preparePoolSizeByte) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x227816C))(0, in_pMemSettings, in_pStmSettings, in_pDefaultDeviceSettings, in_pSettings, in_pPlatformSettings, in_pMusicSettings, in_pSpatialAudioSettings, in_preparePoolSizeByte);
	}
	template <typename T = void> static T Term() {
		return ((T (*)(void *))(Il2CppBase() + 0x22785E8))(0);
	}
	template <typename T = uintptr_t> static T RegisterGameObjInternal(uintptr_t in_GameObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2278750))(0, in_GameObj);
	}
	template <typename T = uintptr_t> static T UnregisterGameObjInternal(uintptr_t in_GameObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227892C))(0, in_GameObj);
	}
	template <typename T = uintptr_t> static T RegisterGameObjInternal_WithName(uintptr_t in_GameObj, Il2CppString* in_pszObjName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2278B08))(0, in_GameObj, in_pszObjName);
	}
	template <typename T = uintptr_t> static T SetBasePath(Il2CppString* in_pszBasePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2278D1C))(0, in_pszBasePath);
	}
	template <typename T = uintptr_t> static T SetCurrentLanguage(Il2CppString* in_pszAudioSrcPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2278EC4))(0, in_pszAudioSrcPath);
	}
	template <typename T = uintptr_t> static T LoadFilePackage(Il2CppString* in_pszFilePackageName, uintptr_t* out_uPackageID, int32_t in_memPoolID) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, int32_t))(Il2CppBase() + 0x227906C))(0, in_pszFilePackageName, out_uPackageID, in_memPoolID);
	}
	template <typename T = uintptr_t> static T AddBasePath(Il2CppString* in_pszBasePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2279250))(0, in_pszBasePath);
	}
	template <typename T = uintptr_t> static T SetGameName(Il2CppString* in_GameName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22793F8))(0, in_GameName);
	}
	template <typename T = uintptr_t> static T SetDecodedBankPath(Il2CppString* in_DecodedPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22795A0))(0, in_DecodedPath);
	}
	template <typename T = uintptr_t> static T LoadAndDecodeBank(Il2CppString* in_pszString, bool in_bSaveDecodedBank, uintptr_t* out_bankID) {
		return ((T (*)(void *, Il2CppString*, bool, uintptr_t*))(Il2CppBase() + 0x2279748))(0, in_pszString, in_bSaveDecodedBank, out_bankID);
	}
	template <typename T = uintptr_t> static T LoadAndDecodeBankFromMemory(uintptr_t in_BankData, uint32_t in_BankDataSize, bool in_bSaveDecodedBank, Il2CppString* in_DecodedBankName, bool in_bIsLanguageSpecific, uintptr_t* out_bankID) {
		return ((T (*)(void *, uintptr_t, uint32_t, bool, Il2CppString*, bool, uintptr_t*))(Il2CppBase() + 0x227992C))(0, in_BankData, in_BankDataSize, in_bSaveDecodedBank, in_DecodedBankName, in_bIsLanguageSpecific, out_bankID);
	}
	template <typename T = Il2CppString*> static T GetCurrentLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x2279B3C))(0);
	}
	template <typename T = uintptr_t> static T UnloadFilePackage(uint32_t in_uPackageID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2279D88))(0, in_uPackageID);
	}
	template <typename T = uintptr_t> static T UnloadAllFilePackages() {
		return ((T (*)(void *))(Il2CppBase() + 0x2279F08))(0);
	}
	template <typename T = uintptr_t> static T SetObjectPosition(uintptr_t in_GameObjectID, float PosX, float PosY, float PosZ, float FrontX, float FrontY, float FrontZ, float TopX, float TopY, float TopZ) {
		return ((T (*)(void *, uintptr_t, float, float, float, float, float, float, float, float, float))(Il2CppBase() + 0x227A070))(0, in_GameObjectID, PosX, PosY, PosZ, FrontX, FrontY, FrontZ, TopX, TopY, TopZ);
	}
	template <typename T = uintptr_t> static T GetSourceMultiplePlayPositions(uint32_t in_PlayingID, Il2CppArray<uintptr_t>* out_audioNodeID, Il2CppArray<uintptr_t>* out_mediaID, Il2CppArray<uintptr_t>* out_msTime, uintptr_t io_pcPositions, bool in_bExtrapolate) {
		return ((T (*)(void *, uint32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x227A2EC))(0, in_PlayingID, out_audioNodeID, out_mediaID, out_msTime, io_pcPositions, in_bExtrapolate);
	}
	template <typename T = uintptr_t> static T SetListeners(uintptr_t in_emitterGameObj, Il2CppArray<uintptr_t>* in_pListenerGameObjs, uint32_t in_uNumListeners) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x227A62C))(0, in_emitterGameObj, in_pListenerGameObjs, in_uNumListeners);
	}
	template <typename T = uintptr_t> static T SetDefaultListeners(Il2CppArray<uintptr_t>* in_pListenerObjs, uint32_t in_uNumListeners) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x227A824))(0, in_pListenerObjs, in_uNumListeners);
	}
	template <typename T = uintptr_t> static T AddOutput(uintptr_t in_Settings, uintptr_t* out_pDeviceID, Il2CppArray<uintptr_t>* in_pListenerIDs, uint32_t in_uNumListeners) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x227A9BC))(0, in_Settings, out_pDeviceID, in_pListenerIDs, in_uNumListeners);
	}
	template <typename T = void> static T GetDefaultStreamSettings(uintptr_t out_settings) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227AB9C))(0, out_settings);
	}
	template <typename T = void> static T GetDefaultDeviceSettings(uintptr_t out_settings) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227AD98))(0, out_settings);
	}
	template <typename T = void> static T GetDefaultMusicSettings(uintptr_t out_settings) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227AF2C))(0, out_settings);
	}
	template <typename T = void> static T GetDefaultInitSettings(uintptr_t out_settings) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227B0C0))(0, out_settings);
	}
	template <typename T = void> static T GetDefaultPlatformInitSettings(uintptr_t out_settings) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227B254))(0, out_settings);
	}
	template <typename T = uint32_t> static T GetMajorMinorVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x227B3E8))(0);
	}
	template <typename T = uint32_t> static T GetSubminorBuildVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x227B550))(0);
	}
	template <typename T = uintptr_t> static T QueryIndirectPaths(uintptr_t in_gameObjectID, uintptr_t arg1, uintptr_t paths, uint32_t numPaths) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x227B6B8))(0, in_gameObjectID, arg1, paths, numPaths);
	}
	template <typename T = uintptr_t> static T QuerySoundPropagationPaths(uintptr_t in_gameObjectID, uintptr_t arg1, uintptr_t paths, uint32_t numPaths) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x227B9E8))(0, in_gameObjectID, arg1, paths, numPaths);
	}
	template <typename T = uintptr_t> static T SetRoomPortal(uint64_t in_PortalID, uintptr_t Transform, uintptr_t Extent, bool bEnabled, uint64_t FrontRoom, uint64_t BackRoom) {
		return ((T (*)(void *, uint64_t, uintptr_t, uintptr_t, bool, uint64_t, uint64_t))(Il2CppBase() + 0x227BC88))(0, in_PortalID, Transform, Extent, bEnabled, FrontRoom, BackRoom);
	}
	template <typename T = uintptr_t> static T SetRoom(uint64_t in_RoomID, uintptr_t in_roomParams, Il2CppString* in_pName) {
		return ((T (*)(void *, uint64_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x227C014))(0, in_RoomID, in_roomParams, in_pName);
	}
	template <typename T = uintptr_t> static T RegisterSpatialAudioListener(uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227C204))(0, in_gameObjectID);
	}
	template <typename T = uintptr_t> static T UnregisterSpatialAudioListener(uintptr_t in_gameObjectID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227C3E0))(0, in_gameObjectID);
	}
	template <typename T = Il2CppString*> static T StringFromIntPtrString(uintptr_t ptr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227C5BC))(0, ptr);
	}
	template <typename T = Il2CppString*> static T StringFromIntPtrWString(uintptr_t ptr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227C664))(0, ptr);
	}
	template <typename T = Il2CppString*> static T StringFromIntPtrOSString(uintptr_t ptr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2279CE8))(0, ptr);
	}
	template <typename T = uint64_t> static T InternalGameObjectHash(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227C70C))(0, gameObject);
	}
	template <typename T = void> static T set_GameObjectHash(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227C7F0))(0, value);
	}
	template <typename T = uint64_t> static T GetAkGameObjectID(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2256658))(0, gameObject);
	}
	template <typename T = uintptr_t> static T RegisterGameObj(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227CA6C))(0, gameObject);
	}
	template <typename T = uintptr_t> static T RegisterGameObj_1(uintptr_t gameObject, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x227CB60))(0, gameObject, name);
	}
	template <typename T = uintptr_t> static T UnregisterGameObj(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227CC5C))(0, gameObject);
	}
	template <typename T = uintptr_t> static T SetObjectPosition_1(uintptr_t gameObject, uintptr_t transform) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x227CD50))(0, gameObject, transform);
	}
	template <typename T = uintptr_t> static T SetObjectPosition_2(uintptr_t gameObject, Il2CppVector3 position, Il2CppVector3 forward, Il2CppVector3 up) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x227CF3C))(0, gameObject, position, forward, up);
	}
	template <typename T = void> static T PreGameObjectAPICall(uintptr_t gameObject, uint64_t id) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x225672C))(0, gameObject, id);
	}

};

}
